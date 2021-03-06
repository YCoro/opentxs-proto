/************************************************************
 *
 *                 OPEN TRANSACTIONS
 *
 *       Financial Cryptography and Digital Cash
 *       Library, Protocol, API, Server, CLI, GUI
 *
 *       -- Anonymous Numbered Accounts.
 *       -- Untraceable Digital Cash.
 *       -- Triple-Signed Receipts.
 *       -- Cheques, Vouchers, Transfers, Inboxes.
 *       -- Basket Currencies, Markets, Payment Plans.
 *       -- Signed, XML, Ricardian-style Contracts.
 *       -- Scripted smart contracts.
 *
 *  EMAIL:
 *  fellowtraveler@opentransactions.org
 *
 *  WEBSITE:
 *  http://www.opentransactions.org/
 *
 *  -----------------------------------------------------
 *
 *   LICENSE:
 *   This Source Code Form is subject to the terms of the
 *   Mozilla Public License, v. 2.0. If a copy of the MPL
 *   was not distributed with this file, You can obtain one
 *   at http://mozilla.org/MPL/2.0/.
 *
 *   DISCLAIMER:
 *   This program is distributed in the hope that it will
 *   be useful, but WITHOUT ANY WARRANTY; without even the
 *   implied warranty of MERCHANTABILITY or FITNESS FOR A
 *   PARTICULAR PURPOSE.  See the Mozilla Public License
 *   for more details.
 *
 ************************************************************/

#include "opentxs-proto/Types.hpp"
#include "opentxs-proto/Check.hpp"

#include <iostream>

namespace opentxs
{
namespace proto
{

bool CheckProto_1(const PeerObject& input, const bool silent)
{
    if (!input.has_type()) {
        FAIL("peer object", "missing type")
    }

    if (input.has_otpayment()) {
        FAIL("peer object", "unexpected otpayment found")
    }

    switch (input.type()) {
        case PEEROBJECT_MESSAGE: {
            if (false == input.has_otmessage()) {
                FAIL("peer object", "missing otmessage")
            }

            if (input.has_otrequest()) {
                FAIL("peer object", "otrequest not empty")
            }

            if (input.has_otreply()) {
                FAIL("peer object", "otreply not empty")
            }
        } break;
        case PEEROBJECT_REQUEST: {
            if (!input.has_otrequest()) {
                FAIL("peer object", "missing otrequest")
            }

            try {
                const bool validrequest = Check(
                    input.otrequest(),
                    PeerObjectAllowedRequest.at(input.version()).first,
                    PeerObjectAllowedRequest.at(input.version()).second,
                    silent);

                if (!validrequest) {
                    FAIL("peer object", "invalid otrequest")
                }
            } catch (const std::out_of_range&) {
                FAIL2(
                    "peer object",
                    "allowed peer request version not defined for version",
                    input.version())
            }

            if (!input.has_nym()) {
                FAIL("peer object", " missing nym")
            }

            try {
                const bool validnym = Check(
                    input.nym(),
                    PeerObjectAllowedCredentialIndex.at(input.version()).first,
                    PeerObjectAllowedCredentialIndex.at(input.version()).second,
                    silent);

                if (!validnym) {
                    FAIL("peer object", "invalid nym")
                }
            } catch (const std::out_of_range&) {
                FAIL2(
                    "peer object",
                    "allowed credential index version not defined for version",
                    input.version())
            }

            if (input.has_otmessage()) {
                FAIL("peer object", "otmessage not empty")
            }

            if (input.has_otreply()) {
                FAIL("peer object", "otreply not empty")
            }
        } break;
        case PEEROBJECT_RESPONSE: {
            if (!input.has_otrequest()) {
                FAIL("peer object", "missing otrequest")
            }

            try {
                const bool validrequest = Check(
                    input.otrequest(),
                    PeerObjectAllowedRequest.at(input.version()).first,
                    PeerObjectAllowedRequest.at(input.version()).second,
                    silent);

                if (!validrequest) {
                    FAIL("peer object", "invalid otrequest")
                }
            } catch (const std::out_of_range&) {
                FAIL2(
                    "peer object",
                    "allowed peer request version not defined for version",
                    input.version())
            }

            if (!input.has_otreply()) {
                FAIL("peer object", "missing otreply")
            }

            try {
                const bool validreply = Check(
                    input.otreply(),
                    PeerObjectAllowedReply.at(input.version()).first,
                    PeerObjectAllowedReply.at(input.version()).second,
                    silent);

                if (!validreply) {
                    FAIL("peer object", "invalid otreply")
                }
            } catch (const std::out_of_range&) {
                FAIL2(
                    "peer object",
                    "allowed peer reply version not defined for version",
                    input.version())
            }

            const bool matchingID =
                (input.otrequest().id() == input.otreply().cookie());

            if (!matchingID) {
                FAIL("peer object", "reply cookie does not match request id")
            }

            const bool matchingtype =
                (input.otrequest().type() == input.otreply().type());

            if (!matchingtype) {
                FAIL("peer object", "reply type does not match request type")
            }

            const bool matchingInitiator =
                (input.otrequest().initiator() == input.otreply().initiator());

            if (!matchingInitiator) {
                FAIL(
                    "peer object",
                    "reply initiator does not match request initiator")
            }

            const bool matchingRecipient =
                (input.otrequest().recipient() == input.otreply().recipient());

            if (!matchingRecipient) {
                FAIL(
                    "peer object",
                    "reply recipient does not match request recipient")
            }

            if (input.has_otmessage()) {
                FAIL("peer object", "otmessage not empty")
            }
        } break;
        default: {
            FAIL("peer object", "invalid type")
        }
    }

    return true;
}
bool CheckProto_2(const PeerObject& input, const bool silent)
{
    return CheckProto_1(input, silent);
}
bool CheckProto_3(const PeerObject& input, const bool silent)
{
    return CheckProto_1(input, silent);
}
bool CheckProto_4(const PeerObject& input, const bool silent)
{
    return CheckProto_1(input, silent);
}

}  // namespace proto
}  // namespace opentxs
