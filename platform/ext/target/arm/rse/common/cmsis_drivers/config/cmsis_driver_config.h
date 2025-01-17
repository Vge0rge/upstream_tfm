/*
 * Copyright (c) 2019-2024, Arm Limited. All rights reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef __CMSIS_DRIVER_CONFIG_H__
#define __CMSIS_DRIVER_CONFIG_H__

#include "tfm_hal_device_header.h"
#include "device_definition.h"
#include "RTE_Device.h"
#include "host_cmsis_driver_config.h"
#ifdef RSE_HAS_EXPANSION_PERIPHERALS
#include "rse_expansion_cmsis_driver_config.h"
#endif /* RSE_HAS_EXPANSION_PERIPHERALS */


#ifdef RSE_DEBUG_UART
#define UART0_DEV                    UART0_CMSDK_DEV_NS
#endif /* RSE_DEBUG_UART */

#define MPC_VM0_DEV                  MPC_VM0_DEV_S
#define MPC_VM1_DEV                  MPC_VM1_DEV_S
#ifdef RSE_XIP
#define MPC_SIC_DEV                  MPC_SIC_DEV_S
#endif /* RSE_XIP */

#endif  /* __CMSIS_DRIVER_CONFIG_H__ */
