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

#ifndef OPENTXS_PROTO_VERIFICATION_HPP
#define OPENTXS_PROTO_VERIFICATION_HPP

#include "VerifyContacts.hpp"

namespace opentxs
{
namespace proto
{
bool CheckProto_1(
    const Verification& verification,
    const bool silent,
    const VerificationType indexed);
bool CheckProto_2(const Verification&, const bool, const VerificationType);
bool CheckProto_3(const Verification&, const bool, const VerificationType);
bool CheckProto_4(const Verification&, const bool, const VerificationType);
bool CheckProto_5(const Verification&, const bool, const VerificationType);
bool CheckProto_6(const Verification&, const bool, const VerificationType);
bool CheckProto_7(const Verification&, const bool, const VerificationType);
bool CheckProto_8(const Verification&, const bool, const VerificationType);
bool CheckProto_9(const Verification&, const bool, const VerificationType);
bool CheckProto_10(const Verification&, const bool, const VerificationType);
bool CheckProto_11(const Verification&, const bool, const VerificationType);
bool CheckProto_12(const Verification&, const bool, const VerificationType);
bool CheckProto_13(const Verification&, const bool, const VerificationType);
bool CheckProto_14(const Verification&, const bool, const VerificationType);
bool CheckProto_15(const Verification&, const bool, const VerificationType);
bool CheckProto_16(const Verification&, const bool, const VerificationType);
bool CheckProto_17(const Verification&, const bool, const VerificationType);
bool CheckProto_18(const Verification&, const bool, const VerificationType);
bool CheckProto_19(const Verification&, const bool, const VerificationType);
bool CheckProto_20(const Verification&, const bool, const VerificationType);
}  // namespace proto
}  // namespace opentxs

#endif  // OPENTXS_PROTO_VERIFICATION_HPP
