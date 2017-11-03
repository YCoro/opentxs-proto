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

namespace opentxs::proto
{
bool CheckProto_1(const StorageContacts& input, const bool silent)
{
    for (auto& merge : input.merge()) {
        try {
            const bool valid = Check(
                merge,
                StorageContactsAllowedList.at(input.version()).first,
                StorageContactsAllowedList.at(input.version()).second,
                silent);

            if (!valid) {
                FAIL("contact storage index", "invalid merge")
            }
        } catch (const std::out_of_range&) {
            FAIL2(
                "contact storage index",
                "allowed storage id list version not defined for version",
                input.version())
        }
    }

    for (auto& hash : input.contact()) {
        try {
            const bool valid = Check(
                hash,
                StorageContactsAllowedHash.at(input.version()).first,
                StorageContactsAllowedHash.at(input.version()).second,
                silent);

            if (!valid) {
                FAIL("contact storage index", "invalid hash")
            }
        } catch (const std::out_of_range&) {
            FAIL2(
                "contact storage index",
                "allowed storage item hash version not defined for version",
                input.version())
        }
    }

    for (auto& index : input.address()) {
        try {
            const bool valid = Check(
                index,
                StorageContactsAllowedAddress.at(input.version()).first,
                StorageContactsAllowedAddress.at(input.version()).second,
                silent);

            if (!valid) {
                FAIL("contact storage index", "invalid address index")
            }
        } catch (const std::out_of_range&) {
            FAIL2(
                "contact storage index",
                "allowed address index version not defined for version",
                input.version())
        }
    }

    if (0 < input.nym().size()) {
        FAIL2(
            "contact storage index",
            "nym index not allowed for version",
            input.version())
    }

    return true;
}
}  // namespace opentxs::proto
