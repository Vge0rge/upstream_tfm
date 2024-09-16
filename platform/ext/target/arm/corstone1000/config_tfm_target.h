/*
 * Copyright (c) 2022-2024, Arm Limited. All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 *
 */

#ifndef __CONFIG_TFM_TARGET_H__
#define __CONFIG_TFM_TARGET_H__

/* Use stored NV seed to provide entropy */
#define CRYPTO_NV_SEED                         0

/* Use external RNG to provide entropy */
#define CRYPTO_EXT_RNG                         1

/* Size of output buffer in platform service. */
#define PLATFORM_SERVICE_OUTPUT_BUFFER_SIZE    256

/* The maximum number of assets to be stored in the Internal Trusted Storage. */
#define ITS_NUM_ASSETS       20

/* The maximum number of assets to be stored in the Protected Storage area. */
#define PS_NUM_ASSETS        20

/* The maximum size of asset to be stored in the Internal Trusted Storage area. */
#define ITS_MAX_ASSET_SIZE   2048

/* The maximum asset size to be stored in the Protected Storage */
#define PS_MAX_ASSET_SIZE   2592

/* This is needed to be able to process the EFI variables during PS writes. */
#define CRYPTO_ENGINE_BUF_SIZE 0x5000

/* This is also has to be increased to fit the EFI variables into the iovecs. */
#define CRYPTO_IOVEC_BUFFER_SIZE    6000
#endif /* __CONFIG_TFM_TARGET_H__ */
