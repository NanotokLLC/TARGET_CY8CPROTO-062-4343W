/*******************************************************************************
* File Name: cycfg_peripherals.c
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

#include "cycfg_peripherals.h"

#define RTOS_STATS_INPUT_DISABLED 0x7U
#define USB_CONSOLE_INTR_LVL_SEL (CY_USBFS_DEV_DRV_SET_SOF_LVL(0x1U) | \
                 CY_USBFS_DEV_DRV_SET_BUS_RESET_LVL(0x2U) | \
                 CY_USBFS_DEV_DRV_SET_EP0_LVL(0x2U) | \
                 CY_USBFS_DEV_DRV_SET_LPM_LVL(0x0U) | \
                 CY_USBFS_DEV_DRV_SET_ARB_EP_LVL(0x0U) | \
                 CY_USBFS_DEV_DRV_SET_EP1_LVL(0x1U) | \
                 CY_USBFS_DEV_DRV_SET_EP2_LVL(0x1U) | \
                 CY_USBFS_DEV_DRV_SET_EP3_LVL(0x1U) | \
                 CY_USBFS_DEV_DRV_SET_EP4_LVL(0x1U) | \
                 CY_USBFS_DEV_DRV_SET_EP5_LVL(0x1U) | \
                 CY_USBFS_DEV_DRV_SET_EP6_LVL(0x1U) | \
                 CY_USBFS_DEV_DRV_SET_EP7_LVL(0x1U) | \
                 CY_USBFS_DEV_DRV_SET_EP8_LVL(0x1U))

const cy_stc_scb_uart_config_t CONSOLE_UART_config = 
{
	.uartMode = CY_SCB_UART_STANDARD,
	.enableMutliProcessorMode = false,
	.smartCardRetryOnNack = false,
	.irdaInvertRx = false,
	.irdaEnableLowPowerReceiver = false,
	.oversample = 14,
	.enableMsbFirst = false,
	.dataWidth = 8UL,
	.parity = CY_SCB_UART_PARITY_NONE,
	.stopBits = CY_SCB_UART_STOP_BITS_1,
	.enableInputFilter = false,
	.breakWidth = 11UL,
	.dropOnFrameError = false,
	.dropOnParityError = false,
	.receiverAddress = 0x0UL,
	.receiverAddressMask = 0x0UL,
	.acceptAddrInFifo = false,
	.enableCts = false,
	.ctsPolarity = CY_SCB_UART_ACTIVE_LOW,
	.rtsRxFifoLevel = 0UL,
	.rtsPolarity = CY_SCB_UART_ACTIVE_LOW,
	.rxFifoTriggerLevel = 0UL,
	.rxFifoIntEnableMask = 4UL,
	.txFifoTriggerLevel = 63UL,
	.txFifoIntEnableMask = 0UL,
};
#if defined (CY_USING_HAL)
	const cyhal_resource_inst_t CONSOLE_UART_obj = 
	{
		.type = CYHAL_RSC_SCB,
		.block_num = 1U,
		.channel_num = 0U,
	};
#endif //defined (CY_USING_HAL)
const cy_stc_scb_spi_config_t ADC_SPI_config = 
{
	.spiMode = CY_SCB_SPI_MASTER,
	.subMode = CY_SCB_SPI_MOTOROLA,
	.sclkMode = CY_SCB_SPI_CPHA1_CPOL0,
	.oversample = 16,
	.rxDataWidth = 8UL,
	.txDataWidth = 8UL,
	.enableMsbFirst = true,
	.enableInputFilter = false,
	.enableFreeRunSclk = false,
	.enableMisoLateSample = true,
	.enableTransferSeperation = false,
	.ssPolarity = ((CY_SCB_SPI_ACTIVE_LOW << CY_SCB_SPI_SLAVE_SELECT0) | \
                                         (CY_SCB_SPI_ACTIVE_LOW << CY_SCB_SPI_SLAVE_SELECT1) | \
                                         (CY_SCB_SPI_ACTIVE_LOW << CY_SCB_SPI_SLAVE_SELECT2) | \
                                         (CY_SCB_SPI_ACTIVE_LOW << CY_SCB_SPI_SLAVE_SELECT3)),
	.enableWakeFromSleep = false,
	.rxFifoTriggerLevel = 0UL,
	.rxFifoIntEnableMask = 0UL,
	.txFifoTriggerLevel = 63UL,
	.txFifoIntEnableMask = 0UL,
	.masterSlaveIntEnableMask = 0UL,
};
#if defined (CY_USING_HAL)
	const cyhal_resource_inst_t ADC_SPI_obj = 
	{
		.type = CYHAL_RSC_SCB,
		.block_num = 2U,
		.channel_num = 0U,
	};
#endif //defined (CY_USING_HAL)
const cy_stc_tcpwm_counter_config_t RTOS_STATS_config = 
{
	.period = 0,
	.clockPrescaler = CY_TCPWM_COUNTER_PRESCALER_DIVBY_32,
	.runMode = CY_TCPWM_COUNTER_CONTINUOUS,
	.countDirection = CY_TCPWM_COUNTER_COUNT_UP,
	.compareOrCapture = CY_TCPWM_COUNTER_MODE_CAPTURE,
	.compare0 = 16384,
	.compare1 = 16384,
	.enableCompareSwap = false,
	.interruptSources = CY_TCPWM_INT_NONE,
	.captureInputMode = RTOS_STATS_INPUT_DISABLED & 0x3U,
	.captureInput = CY_TCPWM_INPUT_0,
	.reloadInputMode = RTOS_STATS_INPUT_DISABLED & 0x3U,
	.reloadInput = CY_TCPWM_INPUT_0,
	.startInputMode = RTOS_STATS_INPUT_DISABLED & 0x3U,
	.startInput = CY_TCPWM_INPUT_0,
	.stopInputMode = RTOS_STATS_INPUT_DISABLED & 0x3U,
	.stopInput = CY_TCPWM_INPUT_0,
	.countInputMode = RTOS_STATS_INPUT_DISABLED & 0x3U,
	.countInput = CY_TCPWM_INPUT_1,
};
#if defined (CY_USING_HAL)
	const cyhal_resource_inst_t RTOS_STATS_obj = 
	{
		.type = CYHAL_RSC_TCPWM,
		.block_num = 0U,
		.channel_num = 0U,
	};
#endif //defined (CY_USING_HAL)
const cy_stc_usbfs_dev_drv_config_t USB_CONSOLE_config = 
{
	.mode = CY_USBFS_DEV_DRV_EP_MANAGEMENT_CPU,
	.epAccess = CY_USBFS_DEV_DRV_USE_8_BITS_DR,
	.epBuffer = NULL,
	.epBufferSize = 0U,
	.dmaConfig[0] = NULL,
	.dmaConfig[1] = NULL,
	.dmaConfig[2] = NULL,
	.dmaConfig[3] = NULL,
	.dmaConfig[4] = NULL,
	.dmaConfig[5] = NULL,
	.dmaConfig[6] = NULL,
	.dmaConfig[7] = NULL,
	.enableLpm = false,
	.intrLevelSel = USB_CONSOLE_INTR_LVL_SEL,
};
#if defined (CY_USING_HAL)
	const cyhal_resource_inst_t USB_CONSOLE_obj = 
	{
		.type = CYHAL_RSC_USB,
		.block_num = 0U,
		.channel_num = 0U,
	};
#endif //defined (CY_USING_HAL)


void init_cycfg_peripherals(void)
{
	Cy_SysClk_PeriphAssignDivider(PCLK_SCB1_CLOCK, CY_SYSCLK_DIV_8_BIT, 1U);
#if defined (CY_USING_HAL)
	cyhal_hwmgr_reserve(&CONSOLE_UART_obj);
#endif //defined (CY_USING_HAL)

	Cy_SysClk_PeriphAssignDivider(PCLK_SCB2_CLOCK, CY_SYSCLK_DIV_8_BIT, 2U);
#if defined (CY_USING_HAL)
	cyhal_hwmgr_reserve(&ADC_SPI_obj);
#endif //defined (CY_USING_HAL)

	Cy_SysClk_PeriphAssignDivider(PCLK_TCPWM0_CLOCKS0, CY_SYSCLK_DIV_16_5_BIT, 0U);
#if defined (CY_USING_HAL)
	cyhal_hwmgr_reserve(&RTOS_STATS_obj);
#endif //defined (CY_USING_HAL)

	Cy_SysClk_PeriphAssignDivider(PCLK_USB_CLOCK_DEV_BRS, CY_SYSCLK_DIV_16_BIT, 0U);
#if defined (CY_USING_HAL)
	cyhal_hwmgr_reserve(&USB_CONSOLE_obj);
#endif //defined (CY_USING_HAL)
}
