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

#define PROTO_NAME "bailment reply"

namespace opentxs
{
namespace proto
{

bool CheckProto_1(const BailmentReply& input, const bool silent)
{
    if (!input.has_instructions()) {
        FAIL("bailment reply", "missing instructions")
    }

    return true;
}

bool CheckProto_2(const BailmentReply& input, const bool silent)
{
    return CheckProto_1(input, silent);
}

bool CheckProto_3(const BailmentReply& input, const bool silent)
{
    return CheckProto_1(input, silent);
}

bool CheckProto_4(const BailmentReply& input, const bool silent)
{
    return CheckProto_1(input, silent);
}

bool CheckProto_5(const BailmentReply& input, const bool silent)
{
    UNDEFINED_VERSION("bailment reply", 5)
}

bool CheckProto_6(const BailmentReply& input, const bool silent)
{
    UNDEFINED_VERSION2(6)
}

bool CheckProto_7(const BailmentReply& input, const bool silent)
{
    UNDEFINED_VERSION2(7)
}

bool CheckProto_8(const BailmentReply& input, const bool silent)
{
    UNDEFINED_VERSION2(8)
}

bool CheckProto_9(const BailmentReply& input, const bool silent)
{
    UNDEFINED_VERSION2(9)
}

bool CheckProto_10(const BailmentReply& input, const bool silent)
{
    UNDEFINED_VERSION2(10)
}

bool CheckProto_11(const BailmentReply& input, const bool silent)
{
    UNDEFINED_VERSION2(11)
}

bool CheckProto_12(const BailmentReply& input, const bool silent)
{
    UNDEFINED_VERSION2(12)
}

bool CheckProto_13(const BailmentReply& input, const bool silent)
{
    UNDEFINED_VERSION2(13)
}

bool CheckProto_14(const BailmentReply& input, const bool silent)
{
    UNDEFINED_VERSION2(14)
}

bool CheckProto_15(const BailmentReply& input, const bool silent)
{
    UNDEFINED_VERSION2(15)
}

bool CheckProto_16(const BailmentReply& input, const bool silent)
{
    UNDEFINED_VERSION2(16)
}

bool CheckProto_17(const BailmentReply& input, const bool silent)
{
    UNDEFINED_VERSION2(17)
}

bool CheckProto_18(const BailmentReply& input, const bool silent)
{
    UNDEFINED_VERSION2(18)
}

bool CheckProto_19(const BailmentReply& input, const bool silent)
{
    UNDEFINED_VERSION2(19)
}

bool CheckProto_20(const BailmentReply& input, const bool silent)
{
    UNDEFINED_VERSION2(20)
}
}  // namespace proto
}  // namespace opentxs
