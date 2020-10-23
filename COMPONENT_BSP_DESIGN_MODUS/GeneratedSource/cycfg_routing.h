/*******************************************************************************
* File Name: cycfg_routing.h
*
* Description:
* Establishes all necessary connections between hardware elements.
* This file was automatically generated and should not be modified.
* Tools Package 2.2.0.2801
* psoc6pdl 1.6.1.4886
* personalities_2.0 2.0.0.0
* udd 1.2.0.473
*
********************************************************************************
* Copyright 2020 Cypress Semiconductor Corporation
* SPDX-License-Identifier: Apache-2.0
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
********************************************************************************/

#if !defined(CYCFG_ROUTING_H)
#define CYCFG_ROUTING_H

#if defined(__cplusplus)
extern "C" {
#endif

#include "cycfg_notices.h"
void init_cycfg_routing(void);
#define init_cycfg_connectivity() init_cycfg_routing()
#define ioss_0_port_0_pin_0_ANALOG P0_0_SRSS_WCO_IN
#define ioss_0_port_0_pin_1_ANALOG P0_1_SRSS_WCO_OUT
#define ioss_0_port_0_pin_5_HSIOM P0_5_SRSS_EXT_CLK
#define ioss_0_port_6_pin_4_HSIOM P6_4_CPUSS_SWJ_SWO_TDO
#define ioss_0_port_6_pin_6_HSIOM P6_6_CPUSS_SWJ_SWDIO_TMS
#define ioss_0_port_6_pin_7_HSIOM P6_7_CPUSS_SWJ_SWCLK_TCLK
#define ioss_0_port_9_pin_0_HSIOM P9_0_SCB2_SPI_MOSI
#define ioss_0_port_9_pin_1_HSIOM P9_1_SCB2_SPI_MISO
#define ioss_0_port_9_pin_2_HSIOM P9_2_SCB2_SPI_CLK
#define ioss_0_port_9_pin_4_HSIOM P9_4_SCB2_SPI_SELECT1
#define ioss_0_port_10_pin_0_HSIOM P10_0_SCB1_UART_RX
#define ioss_0_port_10_pin_1_HSIOM P10_1_SCB1_UART_TX
#define ioss_0_port_14_pin_0_AUX USBDP_USB_USB_DP_PAD
#define ioss_0_port_14_pin_1_AUX USBDM_USB_USB_DM_PAD

#define ADC_DMA_RX_tr_in_0_TRIGGER_OUT TRIG_OUT_1TO1_0_SCB2_RX_TO_PDMA0_TR_IN21
#define ADC_DMA_TX_tr_in_0_TRIGGER_OUT TRIG_OUT_1TO1_0_SCB2_TX_TO_PDMA0_TR_IN20
#define ADC_SPI_tr_rx_req_0_TRIGGER_IN TRIG_IN_1TO1_0_SCB2_RX_TO_PDMA0_TR_IN21
#define ADC_SPI_tr_tx_req_0_TRIGGER_IN TRIG_IN_1TO1_0_SCB2_TX_TO_PDMA0_TR_IN20

#if defined(__cplusplus)
}
#endif


#endif /* CYCFG_ROUTING_H */
