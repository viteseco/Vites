/**
* @file       VITEScoin.h
*
* @brief      Exceptions and constants for VITEScoin
*
* @author     Ian Miers, Christina Garman and Matthew Green
* @date       June 2013
*
* @copyright  Copyright 2013 Ian Miers, Christina Garman and Matthew Green
* @license    This project is released under the MIT license.
**/

#ifndef VITESCOIN_H_
#define VITESCOIN_H_

#include <stdexcept>

#define VITEScoin_DEFAULT_SECURITYLEVEL      80
#define VITEScoin_MIN_SECURITY_LEVEL         80
#define VITEScoin_MAX_SECURITY_LEVEL         80
#define ACCPROOF_KPRIME                     160
#define ACCPROOF_KDPRIME                    128
#define MAX_COINMINT_ATTEMPTS               10000
#define VITEScoin_MINT_PRIME_PARAM           20
#define VITEScoin_VERSION_STRING             "0.11"
#define VITEScoin_VERSION_INT                11
#define VITEScoin_PROTOCOL_VERSION           "1"
#define HASH_OUTPUT_BITS                    256
#define VITEScoin_COMMITMENT_EQUALITY_PROOF  "COMMITMENT_EQUALITY_PROOF"
#define VITEScoin_ACCUMULATOR_PROOF          "ACCUMULATOR_PROOF"
#define VITEScoin_SERIALNUMBER_PROOF         "SERIALNUMBER_PROOF"

// Activate multithreaded mode for proof verification

//#define VITEScoin_THREADING 1

// Uses a fast technique for coin generation. Could be more vulnerable
// to timing attacks. Turn off if an attacker can measure coin minting time.
#define VITEScoin_FAST_MINT 1

// Errors thrown by the VITEScoin library

class VITEScoinException : public std::runtime_error
{
public:
   explicit VITEScoinException(const std::string& str) : std::runtime_error(str) {}
};

#include "../serialize.h"
#include "../bignum.h"
#include "../util.h"
#include "Params.h"
#include "Coin.h"
#include "Commitment.h"
#include "Accumulator.h"
#include "AccumulatorProofOfKnowledge.h"
#include "CoinSpend.h"
#include "SerialNumberSignatureOfKnowledge.h"
#include "ParamGeneration.h"

#endif /* VITEScoin_H_ */
