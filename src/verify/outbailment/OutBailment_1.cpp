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

#include <iostream>

namespace opentxs { namespace proto
{

bool CheckProto_1(const OutBailment& request)
{
    if (!request.has_unitid()) {
        std::cerr << "Verify outbailment failed: missing unit id." << std::endl;

        return false;
    }

    if (MIN_PLAUSIBLE_IDENTIFIER > request.unitid().size()) {
        std::cerr << "Verify outbailment failed: invalid unit id ("
                  << request.unitid() << ")." << std::endl;

        return false;
    }

    if (MAX_PLAUSIBLE_IDENTIFIER < request.unitid().size()) {
        std::cerr << "Verify outbailment failed: invalid unit id ("
                  << request.unitid() << ")." << std::endl;

        return false;
    }

    if (!request.has_serverid()) {
        std::cerr << "Verify outbailment failed: missing server id."
                  << std::endl;

        return false;
    }

    if (MIN_PLAUSIBLE_IDENTIFIER > request.serverid().size()) {
        std::cerr << "Verify outbailment failed: invalid server id ("
                  << request.serverid() << ")." << std::endl;

        return false;
    }

    if (MAX_PLAUSIBLE_IDENTIFIER < request.serverid().size()) {
        std::cerr << "Verify outbailment failed: invalid server id ("
                  << request.serverid() << ")." << std::endl;

        return false;
    }

    if (!request.has_amount()) {
        std::cerr << "Verify outbailment failed: missing amount." << std::endl;

        return false;
    }

    if (!request.has_instructions()) {
        std::cerr << "Verify outbailment failed: missing instructions."
                  << std::endl;

        return false;
    }

    return true;
}

bool CheckProto_2(const OutBailment& request) {

    return CheckProto_1(request);
}

bool CheckProto_3(const OutBailment& request) {

    return CheckProto_1(request);
}

bool CheckProto_4(const OutBailment&) { return false; }
bool CheckProto_5(const OutBailment&) { return false; }
} // namespace proto
} // namespace opentxs
