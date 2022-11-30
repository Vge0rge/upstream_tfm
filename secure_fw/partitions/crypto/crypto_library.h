/*
 * Copyright (c) 2022, Arm Limited. All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 *
 */

/**
 * \file crypto_library.h
 *
 * \brief This file contains some abstractions required to interface the
 *        TF-M Crypto service to an underlying cryptographic library that
 *        implements the PSA Crypto API. The TF-M Crypto service uses this
 *        library to provide a PSA Crypto core layer implementation and
 *        a software or hardware based implementation of crypto algorithms.
 */

#ifndef CRYPTO_LIBRARY_H
#define CRYPTO_LIBRARY_H

#include "psa/crypto.h"
#include "tfm_crypto_api.h"

/**
 * \brief This macro extracts the key ID from the library encoded key passed as parameter
 *
 */
#define CRYPTO_LIBRARY_GET_KEY_ID(encoded_key_library) MBEDTLS_SVC_KEY_ID_GET_KEY_ID(encoded_key_library)

/**
 * \brief The following typedef must be defined to the type associated to the key_id in the underlying library
 *
 */
typedef mbedtls_svc_key_id_t tfm_crypto_library_key_id_t;

/**
 * \brief Function used to initialise an object of \ref tfm_crypto_library_key_id_t to a (owner, key_id) pair
 *
 * \param[in] owner   Owner of the key
 * \param[in] key_id  key ID associated to the key of type \ref psa_key_id_t
 *
 * \return An object of type \ref tfm_crypto_library_key_id_t
 *
 */
tfm_crypto_library_key_id_t tfm_crypto_library_key_id_init(int32_t owner, psa_key_id_t key_id);

/**
 * \brief This function is used to retrieve a string describing the library used in the backend
 *        to provide information to the crypto service and the user
 *
 * \return A NULL terminated string describing the backend library
 */
char *tfm_crypto_library_get_info(void);

/**
 * \brief This function initialises a \ref tfm_crypto_library_key_id_t with default values
 *
 */
static inline tfm_crypto_library_key_id_t tfm_crypto_library_key_id_init_default(void)
{
    return tfm_crypto_library_key_id_init(0, 0);
}
#endif /* CRYPTO_LIBRARY_H */