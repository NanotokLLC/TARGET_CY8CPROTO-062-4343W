/*******************************************************************************
* File Name: cycfg_peripherals.h
*
* Description:
* Peripheral Hardware Block configuration
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

#if !defined(CYCFG_PERIPHERALS_H)
#define CYCFG_PERIPHERALS_H

#include "cycfg_notices.h"
#include "cy_scb_uart.h"
#include "cy_sysclk.h"
#if defined (CY_USING_HAL)
	#include "cyhal_hwmgr.h"
#endif //defined (CY_USING_HAL)
#include "cy_scb_spi.h"
#include "cy_tcpwm_counter.h"
#include "cycfg_routing.h"
#include "cy_usbfs_dev_drv.h"

#if defined(__cplusplus)
extern "C" {
#endif

#define CONSOLE_UART_ENABLED 1U
#define CONSOLE_UART_HW SCB1
#define CONSOLE_UART_IRQ scb_1_interrupt_IRQn
#define ADC_SPI_ENABLED 1U
#define ADC_SPI_HW SCB2
#define ADC_SPI_IRQ scb_2_interrupt_IRQn
#define RTOS_STATS_ENABLED 1U
#define RTOS_STATS_HW TCPWM0
#define RTOS_STATS_NUM 0UL
#define RTOS_STATS_MASK (1UL << 0)
#define USB_CONSOLE_ENABLED 1U
#define USB_CONSOLE_ACTIVE_ENDPOINTS_MASK 7U
#define USB_CONSOLE_ENDPOINTS_BUFFER_SIZE 512U
#define USB_CONSOLE_ENDPOINTS_ACCESS_TYPE 0U
#define USB_CONSOLE_HW USBFS0
#define USB_CONSOLE_HI_IRQ usb_interrupt_hi_IRQn
#define USB_CONSOLE_MED_IRQ usb_interrupt_med_IRQn
#define USB_CONSOLE_LO_IRQ usb_interrupt_lo_IRQn

extern const cy_stc_scb_uart_config_t CONSOLE_UART_config;
#if defined (CY_USING_HAL)
	extern const cyhal_resource_inst_t CONSOLE_UART_obj;
#endif //defined (CY_USING_HAL)
extern const cy_stc_scb_spi_config_t ADC_SPI_config;
#if defined (CY_USING_HAL)
	extern const cyhal_resource_inst_t ADC_SPI_obj;
#endif //defined (CY_USING_HAL)
extern const cy_stc_tcpwm_counter_config_t RTOS_STATS_config;
#if defined (CY_USING_HAL)
	extern const cyhal_resource_inst_t RTOS_STATS_obj;
#endif //defined (CY_USING_HAL)
extern const cy_stc_usbfs_dev_drv_config_t USB_CONSOLE_config;
#if defined (CY_USING_HAL)
	extern const cyhal_resource_inst_t USB_CONSOLE_obj;
#endif //defined (CY_USING_HAL)

void init_cycfg_peripherals(void);

#if defined(__cplusplus)
}
#endif


#endif /* CYCFG_PERIPHERALS_H */
