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

#ifndef OPENTXS_PROTO_VERIFYSTORAGE_HPP
#define OPENTXS_PROTO_VERIFYSTORAGE_HPP

#include "opentxs-proto/Basic.hpp"

namespace opentxs
{
namespace proto
{
class StorageAccountIndex;
class StorageAccounts;
class StorageBip47ChannelList;
class StorageContactAddressIndex;
class StorageContactNymIndex;
class StorageContacts;
class StorageCredentials;
class StorageIDList;
class StorageItemHash;
class StorageItems;
class StorageIssuers;
class StorageNym;
class StorageNymList;
class StoragePaymentWorkflows;
class StorageRoot;
class StorageSeeds;
class StorageServers;
class StorageThread;
class StorageThreadItem;
class StorageUnits;
class StorageWorkflowIndex;
class StorageWorkflowType;

static const VersionMap StorageAccountsAllowedStorageAccountIndex = {
    {1, {1, 1}},
};
static const VersionMap StorageAccountsAllowedStorageItemHash = {
    {1, {1, 2}},
};
static const VersionMap StorageAccountsAllowedStorageIDList = {
    {1, {1, 1}},
};
static const VersionMap StorageContactsAllowedAddress = {
    {1, {1, 1}},
    {2, {1, 1}},
};
static const VersionMap StorageContactsAllowedHash = {
    {1, {1, 2}},
    {2, {1, 2}},
};
static const VersionMap StorageContactsAllowedList = {
    {1, {1, 1}},
    {2, {1, 1}},
};
static const VersionMap StorageContactsAllowedNym = {
    {2, {1, 1}},
};
static const VersionMap StorageCredentialAllowedHash = {
    {1, {1, 1}},
    {2, {1, 2}},
};
static const VersionMap StorageNymAllowedHash = {
    {1, {1, 1}},
    {2, {1, 2}},
    {3, {2, 3}},
    {4, {2, 4}},
    {5, {2, 5}},
    {6, {2, 6}},
    {7, {2, 6}},
};
static const VersionMap StorageNymAllowedBip44Account{
    {4, {1, 1}},
    {5, {1, 1}},
    {6, {1, 1}},
    {7, {1, 1}},
};
static const VersionMap StorageNymAllowedBip47ChannelList = {{7, {1, 1}}};

static const VersionMap StorageNymAllowedBlockchainAccountList{
    {4, {1, 1}},
    {5, {1, 1}},
    {6, {1, 1}},
    {7, {1, 1}},
};
static const VersionMap StorageNymListAllowedHash = {
    {1, {1, 1}},
    {2, {1, 2}},
    {3, {1, 3}},
};
static const VersionMap StoragePaymentWorkflowsAllowedHash = {
    {1, {1, 2}},
};
static const VersionMap StoragePaymentWorkflowsAllowedIndex = {
    {1, {1, 1}},
};
static const VersionMap StoragePaymentWorkflowsAllowedType = {
    {1, {1, 1}},
};
static const VersionMap StorageServersAllowedHash = {
    {1, {1, 1}},
    {2, {1, 2}},
};
static const VersionMap StorageThreadAllowedItem = {
    {1, {1, 1}},
};
static const VersionMap StorageUnitsAllowedHash = {
    {1, {1, 1}},
    {2, {1, 2}},
};
static const VersionMap StorageSeedsAllowedHash = {
    {1, {1, 1}},
    {2, {1, 2}},
};
static const VersionMap StorageIssuerAllowedHash = {
    {1, {1, 2}},
};
}  // namespace proto
}  // namespace opentxs
#endif  // OPENTXS_PROTO_VERIFYSTORAGE_HPP
