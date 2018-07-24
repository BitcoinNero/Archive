#pragma once
#include <cstddef>
#include <cstdint>
#include <limits>
namespace CryptoNote {
namespace parameters {
const uint32_t CRYPTONOTE_MAX_BLOCK_NUMBER                   = 500000000;
const size_t   CRYPTONOTE_MAX_BLOCK_BLOB_SIZE                = 500000000;
const size_t   CRYPTONOTE_MAX_TX_SIZE                        = 10000000000;
const uint64_t CRYPTONOTE_PUBLIC_ADDRESS_BASE58_PREFIX       = 60;
const uint32_t CRYPTONOTE_MINED_MONEY_UNLOCK_WINDOW          = 10;
const uint64_t CRYPTONOTE_BLOCK_FUTURE_TIME_LIMIT            = 60 * 60 * 2;
const size_t   BLOCKCHAIN_TIMESTAMP_CHECK_WINDOW             = 60;
const uint64_t MONEY_SUPPLY                                  = 2100000000000000;
const unsigned EMISSION_SPEED_FACTOR                         = 17;
static_assert(EMISSION_SPEED_FACTOR <= 8 * sizeof(uint64_t), "Bad EMISSION_SPEED_FACTOR");
const size_t   CRYPTONOTE_REWARD_BLOCKS_WINDOW               = 100;
const size_t   CRYPTONOTE_BLOCK_GRANTED_FULL_REWARD_ZONE     = 10000;
const size_t   CRYPTONOTE_BLOCK_GRANTED_FULL_REWARD_ZONE_V2  = 10000;
const size_t   CRYPTONOTE_BLOCK_GRANTED_FULL_REWARD_ZONE_V1  = 10000;
const size_t   CRYPTONOTE_BLOCK_GRANTED_FULL_REWARD_ZONE_CURRENT = CRYPTONOTE_BLOCK_GRANTED_FULL_REWARD_ZONE;
const size_t   CRYPTONOTE_COINBASE_BLOB_RESERVED_SIZE        = 600;
const size_t   CRYPTONOTE_DISPLAY_DECIMAL_POINT              = 8;
const uint64_t MINIMUM_FEE                                   = 10000;
const uint64_t DEFAULT_DUST_THRESHOLD                        = 10000;
const uint64_t DIFFICULTY_TARGET                             = 10;
const uint64_t EXPECTED_NUMBER_OF_BLOCKS_PER_DAY             = 24 * 60 * 60 / DIFFICULTY_TARGET;
const size_t   DIFFICULTY_WINDOW                             = EXPECTED_NUMBER_OF_BLOCKS_PER_DAY;
const size_t   DIFFICULTY_CUT                                = 60;
const size_t   DIFFICULTY_LAG                                = 15;
static_assert(2 * DIFFICULTY_CUT <= DIFFICULTY_WINDOW - 2, "Bad DIFFICULTY_WINDOW or DIFFICULTY_CUT");
const size_t   MAX_BLOCK_SIZE_INITIAL                        = 20 * 1024;
const uint64_t MAX_BLOCK_SIZE_GROWTH_SPEED_NUMERATOR         = 100 * 1024;
const uint64_t MAX_BLOCK_SIZE_GROWTH_SPEED_DENOMINATOR       = 365 * 24 * 60 * 60 / DIFFICULTY_TARGET;
const uint64_t CRYPTONOTE_LOCKED_TX_ALLOWED_DELTA_BLOCKS     = 1;
const uint64_t CRYPTONOTE_LOCKED_TX_ALLOWED_DELTA_SECONDS    = DIFFICULTY_TARGET * CRYPTONOTE_LOCKED_TX_ALLOWED_DELTA_BLOCKS;
const uint64_t CRYPTONOTE_MEMPOOL_TX_LIVETIME                = 60 * 60 * 24;
const uint64_t CRYPTONOTE_MEMPOOL_TX_FROM_ALT_BLOCK_LIVETIME = 60 * 60 * 24 * 7;
const uint64_t CRYPTONOTE_NUMBER_OF_PERIODS_TO_FORGET_TX_DELETED_FROM_POOL = 7;
const size_t   FUSION_TX_MAX_SIZE                            = CRYPTONOTE_BLOCK_GRANTED_FULL_REWARD_ZONE_CURRENT * 30 / 100;
const size_t   FUSION_TX_MIN_INPUT_COUNT                     = 12;
const size_t   FUSION_TX_MIN_IN_OUT_COUNT_RATIO              = 4;
const uint32_t KEY_IMAGE_CHECKING_BLOCK_INDEX                = 0;
const uint32_t UPGRADE_HEIGHT_V2                             = 10000000;
const uint32_t UPGRADE_HEIGHT_V3                             = 10000050;
const unsigned UPGRADE_VOTING_THRESHOLD                      = 90;
const uint32_t UPGRADE_VOTING_WINDOW                         = EXPECTED_NUMBER_OF_BLOCKS_PER_DAY;
const uint32_t UPGRADE_WINDOW                                = EXPECTED_NUMBER_OF_BLOCKS_PER_DAY;
static_assert(0 < UPGRADE_VOTING_THRESHOLD && UPGRADE_VOTING_THRESHOLD <= 100, "Bad UPGRADE_VOTING_THRESHOLD");
static_assert(UPGRADE_VOTING_WINDOW > 1, "Bad UPGRADE_VOTING_WINDOW");
const char     CRYPTONOTE_BLOCKS_FILENAME[]                  = "blocks.dat";
const char     CRYPTONOTE_BLOCKINDEXES_FILENAME[]            = "blockindexes.dat";
const char     CRYPTONOTE_POOLDATA_FILENAME[]                = "poolstate.dat";
const char     P2P_NET_DATA_FILENAME[]                       = "p2pstate.dat";
const char     MINER_CONFIG_FILE_NAME[]                      = "miner_conf.dat.json";
}
const char     CRYPTONOTE_NAME[]                             = "bitcoinnero";
const uint8_t  TRANSACTION_VERSION_1                         =  1;
const uint8_t  TRANSACTION_VERSION_2                         =  2;
const uint8_t  CURRENT_TRANSACTION_VERSION                   =  TRANSACTION_VERSION_1;
const uint8_t  BLOCK_MAJOR_VERSION_1                         =  1;
const uint8_t  BLOCK_MAJOR_VERSION_2                         =  2;
const uint8_t  BLOCK_MAJOR_VERSION_3                         =  3;
const uint8_t  BLOCK_MINOR_VERSION_0                         =  0;
const uint8_t  BLOCK_MINOR_VERSION_1                         =  1;
const size_t   BLOCKS_IDS_SYNCHRONIZING_DEFAULT_COUNT        =  10000;
const size_t   BLOCKS_SYNCHRONIZING_DEFAULT_COUNT            =  200;
const size_t   COMMAND_RPC_GET_BLOCKS_FAST_MAX_COUNT         =  1000;
const int      P2P_DEFAULT_PORT                              =  17150;
const int      RPC_DEFAULT_PORT                              =  17151;
const size_t   P2P_LOCAL_WHITE_PEERLIST_LIMIT                =  1000;
const size_t   P2P_LOCAL_GRAY_PEERLIST_LIMIT                 =  5000;
const size_t   P2P_CONNECTION_MAX_WRITE_BUFFER_SIZE          = 16 * 1024 * 1024;
const uint32_t P2P_DEFAULT_CONNECTIONS_COUNT                 = 8;
const size_t   P2P_DEFAULT_WHITELIST_CONNECTIONS_PERCENT     = 70;
const uint32_t P2P_DEFAULT_HANDSHAKE_INTERVAL                = 60; 
const uint32_t P2P_DEFAULT_PACKET_MAX_SIZE                   = 50000000;
const uint32_t P2P_DEFAULT_PEERS_IN_HANDSHAKE                = 250;
const uint32_t P2P_DEFAULT_CONNECTION_TIMEOUT                = 5000;
const uint32_t P2P_DEFAULT_PING_CONNECTION_TIMEOUT           = 2000; 
const uint64_t P2P_DEFAULT_INVOKE_TIMEOUT                    = 60 * 2 * 1000;
const size_t   P2P_DEFAULT_HANDSHAKE_INVOKE_TIMEOUT          = 5000;
const char     P2P_STAT_TRUSTED_PUB_KEY[]                    = "8f80f9a5a434a9f1510d13336228debfee9c918ce505efe225d8c94d045fa115";
const char* const SEED_NODES[] = { 
  "node-1.btcnero.org",
  "node-2.btcnero.org",
  "node-3.btcnero.org",
  "node-4.btcnero.org",
  "node-5.btcnero.org",
  "node-6.btcnero.org",
  "node-7.btcnero.org",
  "node-8.btcnero.org",
  "node-9.btcnero.org",
  "node-10.btcnero.org",
  "node-12.btcnero.org",
  "node-13.btcnero.org",
  "node-14.btcnero.org",
  "node-15.btcnero.org",
};
struct CheckpointData {
  uint32_t index;
  const char* blockId;
};
const std::initializer_list<CheckpointData> CHECKPOINTS = {  
 {10000, "36ea732bd382ed52e3166494e3f3a1afa8d7f69f5b913beb8c7f6c4d24e0ca8f"},
 {20000, "95ae1f4635f060a5a23dd1256410699aa704478aebbd8654b44273a4ce2dc3af"},
 {30000, "3101ae7f8d653721e4783fe3cedd0eabb0f6ddaeb3537b6744f1149710ee8ed3"},
 {40000, "c4ca850215b109a5dc8712a5a8bb67c8ae2b3e018233b98bfe39052f9fe71ea5"},
 {50000, "560c8cd2c947cfebe4f272b0b2e2b2ffb807efee4588fcdb4f37338966509c95"},
 {60000, "e64336ba239f18ec1740286c5d1c3274c4eb8e380b56161872fcc0701626d5ab"},
 {70000, "9d2e03edea2eaf80cf191ffab4b01645da7bb9151950f4552ab085fdef124c95"},
};

}
#define ALLOW_DEBUG_COMMANDS
