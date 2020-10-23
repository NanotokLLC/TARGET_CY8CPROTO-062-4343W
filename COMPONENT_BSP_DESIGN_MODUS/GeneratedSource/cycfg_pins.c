/*******************************************************************************
* File Name: cycfg_pins.c
*
* Description:
* Pin configuration
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

#include "cycfg_pins.h"

const cy_stc_gpio_pin_config_t CYBSP_WCO_IN_config = 
{
	.outVal = 1,
	.driveMode = CY_GPIO_DM_ANALOG,
	.hsiom = CYBSP_WCO_IN_HSIOM,
	.intEdge = CY_GPIO_INTR_DISABLE,
	.intMask = 0UL,
	.vtrip = CY_GPIO_VTRIP_CMOS,
	.slewRate = CY_GPIO_SLEW_FAST,
	.driveSel = CY_GPIO_DRIVE_1_2,
	.vregEn = 0UL,
	.ibufMode = 0UL,
	.vtripSel = 0UL,
	.vrefSel = 0UL,
	.vohSel = 0UL,
};
#if defined (CY_USING_HAL)
	const cyhal_resource_inst_t CYBSP_WCO_IN_obj = 
	{
		.type = CYHAL_RSC_GPIO,
		.block_num = CYBSP_WCO_IN_PORT_NUM,
		.channel_num = CYBSP_WCO_IN_PIN,
	};
#endif //defined (CY_USING_HAL)
const cy_stc_gpio_pin_config_t CYBSP_WCO_OUT_config = 
{
	.outVal = 1,
	.driveMode = CY_GPIO_DM_ANALOG,
	.hsiom = CYBSP_WCO_OUT_HSIOM,
	.intEdge = CY_GPIO_INTR_DISABLE,
	.intMask = 0UL,
	.vtrip = CY_GPIO_VTRIP_CMOS,
	.slewRate = CY_GPIO_SLEW_FAST,
	.driveSel = CY_GPIO_DRIVE_1_2,
	.vregEn = 0UL,
	.ibufMode = 0UL,
	.vtripSel = 0UL,
	.vrefSel = 0UL,
	.vohSel = 0UL,
};
#if defined (CY_USING_HAL)
	const cyhal_resource_inst_t CYBSP_WCO_OUT_obj = 
	{
		.type = CYHAL_RSC_GPIO,
		.block_num = CYBSP_WCO_OUT_PORT_NUM,
		.channel_num = CYBSP_WCO_OUT_PIN,
	};
#endif //defined (CY_USING_HAL)
const cy_stc_gpio_pin_config_t ADC_CLOCK_OUT_config = 
{
	.outVal = 1,
	.driveMode = CY_GPIO_DM_STRONG_IN_OFF,
	.hsiom = ADC_CLOCK_OUT_HSIOM,
	.intEdge = CY_GPIO_INTR_DISABLE,
	.intMask = 0UL,
	.vtrip = CY_GPIO_VTRIP_CMOS,
	.slewRate = CY_GPIO_SLEW_FAST,
	.driveSel = CY_GPIO_DRIVE_1_8,
	.vregEn = 0UL,
	.ibufMode = 0UL,
	.vtripSel = 0UL,
	.vrefSel = 0UL,
	.vohSel = 0UL,
};
#if defined (CY_USING_HAL)
	const cyhal_resource_inst_t ADC_CLOCK_OUT_obj = 
	{
		.type = CYHAL_RSC_GPIO,
		.block_num = ADC_CLOCK_OUT_PORT_NUM,
		.channel_num = ADC_CLOCK_OUT_PIN,
	};
#endif //defined (CY_USING_HAL)
const cy_stc_gpio_pin_config_t UART_RX_config = 
{
	.outVal = 1,
	.driveMode = CY_GPIO_DM_HIGHZ,
	.hsiom = UART_RX_HSIOM,
	.intEdge = CY_GPIO_INTR_DISABLE,
	.intMask = 0UL,
	.vtrip = CY_GPIO_VTRIP_CMOS,
	.slewRate = CY_GPIO_SLEW_FAST,
	.driveSel = CY_GPIO_DRIVE_1_2,
	.vregEn = 0UL,
	.ibufMode = 0UL,
	.vtripSel = 0UL,
	.vrefSel = 0UL,
	.vohSel = 0UL,
};
#if defined (CY_USING_HAL)
	const cyhal_resource_inst_t UART_RX_obj = 
	{
		.type = CYHAL_RSC_GPIO,
		.block_num = UART_RX_PORT_NUM,
		.channel_num = UART_RX_PIN,
	};
#endif //defined (CY_USING_HAL)
const cy_stc_gpio_pin_config_t UART_TX_config = 
{
	.outVal = 1,
	.driveMode = CY_GPIO_DM_STRONG_IN_OFF,
	.hsiom = UART_TX_HSIOM,
	.intEdge = CY_GPIO_INTR_DISABLE,
	.intMask = 0UL,
	.vtrip = CY_GPIO_VTRIP_CMOS,
	.slewRate = CY_GPIO_SLEW_FAST,
	.driveSel = CY_GPIO_DRIVE_1_2,
	.vregEn = 0UL,
	.ibufMode = 0UL,
	.vtripSel = 0UL,
	.vrefSel = 0UL,
	.vohSel = 0UL,
};
#if defined (CY_USING_HAL)
	const cyhal_resource_inst_t UART_TX_obj = 
	{
		.type = CYHAL_RSC_GPIO,
		.block_num = UART_TX_PORT_NUM,
		.channel_num = UART_TX_PIN,
	};
#endif //defined (CY_USING_HAL)
const cy_stc_gpio_pin_config_t CYBSP_USER_LED_config = 
{
	.outVal = 1,
	.driveMode = CY_GPIO_DM_STRONG,
	.hsiom = CYBSP_USER_LED_HSIOM,
	.intEdge = CY_GPIO_INTR_DISABLE,
	.intMask = 0UL,
	.vtrip = CY_GPIO_VTRIP_CMOS,
	.slewRate = CY_GPIO_SLEW_FAST,
	.driveSel = CY_GPIO_DRIVE_1_2,
	.vregEn = 0UL,
	.ibufMode = 0UL,
	.vtripSel = 0UL,
	.vrefSel = 0UL,
	.vohSel = 0UL,
};
#if defined (CY_USING_HAL)
	const cyhal_resource_inst_t CYBSP_USER_LED_obj = 
	{
		.type = CYHAL_RSC_GPIO,
		.block_num = CYBSP_USER_LED_PORT_NUM,
		.channel_num = CYBSP_USER_LED_PIN,
	};
#endif //defined (CY_USING_HAL)
const cy_stc_gpio_pin_config_t ioss_0_port_14_pin_0_config = 
{
	.outVal = 1,
	.driveMode = CY_GPIO_DM_ANALOG,
	.hsiom = ioss_0_port_14_pin_0_HSIOM,
	.intEdge = CY_GPIO_INTR_DISABLE,
	.intMask = 0UL,
	.vtrip = CY_GPIO_VTRIP_CMOS,
	.slewRate = CY_GPIO_SLEW_FAST,
	.driveSel = CY_GPIO_DRIVE_1_2,
	.vregEn = 0UL,
	.ibufMode = 0UL,
	.vtripSel = 0UL,
	.vrefSel = 0UL,
	.vohSel = 0UL,
};
#if defined (CY_USING_HAL)
	const cyhal_resource_inst_t ioss_0_port_14_pin_0_obj = 
	{
		.type = CYHAL_RSC_GPIO,
		.block_num = ioss_0_port_14_pin_0_PORT_NUM,
		.channel_num = ioss_0_port_14_pin_0_PIN,
	};
#endif //defined (CY_USING_HAL)
const cy_stc_gpio_pin_config_t ioss_0_port_14_pin_1_config = 
{
	.outVal = 1,
	.driveMode = CY_GPIO_DM_ANALOG,
	.hsiom = ioss_0_port_14_pin_1_HSIOM,
	.intEdge = CY_GPIO_INTR_DISABLE,
	.intMask = 0UL,
	.vtrip = CY_GPIO_VTRIP_CMOS,
	.slewRate = CY_GPIO_SLEW_FAST,
	.driveSel = CY_GPIO_DRIVE_1_2,
	.vregEn = 0UL,
	.ibufMode = 0UL,
	.vtripSel = 0UL,
	.vrefSel = 0UL,
	.vohSel = 0UL,
};
#if defined (CY_USING_HAL)
	const cyhal_resource_inst_t ioss_0_port_14_pin_1_obj = 
	{
		.type = CYHAL_RSC_GPIO,
		.block_num = ioss_0_port_14_pin_1_PORT_NUM,
		.channel_num = ioss_0_port_14_pin_1_PIN,
	};
#endif //defined (CY_USING_HAL)
const cy_stc_gpio_pin_config_t CYBSP_CSD_TX_config = 
{
	.outVal = 1,
	.driveMode = CY_GPIO_DM_ANALOG,
	.hsiom = CYBSP_CSD_TX_HSIOM,
	.intEdge = CY_GPIO_INTR_DISABLE,
	.intMask = 0UL,
	.vtrip = CY_GPIO_VTRIP_CMOS,
	.slewRate = CY_GPIO_SLEW_FAST,
	.driveSel = CY_GPIO_DRIVE_1_2,
	.vregEn = 0UL,
	.ibufMode = 0UL,
	.vtripSel = 0UL,
	.vrefSel = 0UL,
	.vohSel = 0UL,
};
#if defined (CY_USING_HAL)
	const cyhal_resource_inst_t CYBSP_CSD_TX_obj = 
	{
		.type = CYHAL_RSC_GPIO,
		.block_num = CYBSP_CSD_TX_PORT_NUM,
		.channel_num = CYBSP_CSD_TX_PIN,
	};
#endif //defined (CY_USING_HAL)
const cy_stc_gpio_pin_config_t ioss_0_port_6_pin_0_config = 
{
	.outVal = 1,
	.driveMode = CY_GPIO_DM_HIGHZ,
	.hsiom = ioss_0_port_6_pin_0_HSIOM,
	.intEdge = CY_GPIO_INTR_DISABLE,
	.intMask = 0UL,
	.vtrip = CY_GPIO_VTRIP_CMOS,
	.slewRate = CY_GPIO_SLEW_FAST,
	.driveSel = CY_GPIO_DRIVE_1_2,
	.vregEn = 0UL,
	.ibufMode = 0UL,
	.vtripSel = 0UL,
	.vrefSel = 0UL,
	.vohSel = 0UL,
};
#if defined (CY_USING_HAL)
	const cyhal_resource_inst_t ioss_0_port_6_pin_0_obj = 
	{
		.type = CYHAL_RSC_GPIO,
		.block_num = ioss_0_port_6_pin_0_PORT_NUM,
		.channel_num = ioss_0_port_6_pin_0_PIN,
	};
#endif //defined (CY_USING_HAL)
const cy_stc_gpio_pin_config_t ioss_0_port_6_pin_1_config = 
{
	.outVal = 1,
	.driveMode = CY_GPIO_DM_STRONG_IN_OFF,
	.hsiom = ioss_0_port_6_pin_1_HSIOM,
	.intEdge = CY_GPIO_INTR_DISABLE,
	.intMask = 0UL,
	.vtrip = CY_GPIO_VTRIP_CMOS,
	.slewRate = CY_GPIO_SLEW_FAST,
	.driveSel = CY_GPIO_DRIVE_1_2,
	.vregEn = 0UL,
	.ibufMode = 0UL,
	.vtripSel = 0UL,
	.vrefSel = 0UL,
	.vohSel = 0UL,
};
#if defined (CY_USING_HAL)
	const cyhal_resource_inst_t ioss_0_port_6_pin_1_obj = 
	{
		.type = CYHAL_RSC_GPIO,
		.block_num = ioss_0_port_6_pin_1_PORT_NUM,
		.channel_num = ioss_0_port_6_pin_1_PIN,
	};
#endif //defined (CY_USING_HAL)
const cy_stc_gpio_pin_config_t ioss_0_port_6_pin_2_config = 
{
	.outVal = 1,
	.driveMode = CY_GPIO_DM_HIGHZ,
	.hsiom = ioss_0_port_6_pin_2_HSIOM,
	.intEdge = CY_GPIO_INTR_DISABLE,
	.intMask = 0UL,
	.vtrip = CY_GPIO_VTRIP_CMOS,
	.slewRate = CY_GPIO_SLEW_FAST,
	.driveSel = CY_GPIO_DRIVE_1_2,
	.vregEn = 0UL,
	.ibufMode = 0UL,
	.vtripSel = 0UL,
	.vrefSel = 0UL,
	.vohSel = 0UL,
};
#if defined (CY_USING_HAL)
	const cyhal_resource_inst_t ioss_0_port_6_pin_2_obj = 
	{
		.type = CYHAL_RSC_GPIO,
		.block_num = ioss_0_port_6_pin_2_PORT_NUM,
		.channel_num = ioss_0_port_6_pin_2_PIN,
	};
#endif //defined (CY_USING_HAL)
const cy_stc_gpio_pin_config_t ioss_0_port_6_pin_3_config = 
{
	.outVal = 1,
	.driveMode = CY_GPIO_DM_HIGHZ,
	.hsiom = ioss_0_port_6_pin_3_HSIOM,
	.intEdge = CY_GPIO_INTR_DISABLE,
	.intMask = 0UL,
	.vtrip = CY_GPIO_VTRIP_CMOS,
	.slewRate = CY_GPIO_SLEW_FAST,
	.driveSel = CY_GPIO_DRIVE_1_2,
	.vregEn = 0UL,
	.ibufMode = 0UL,
	.vtripSel = 0UL,
	.vrefSel = 0UL,
	.vohSel = 0UL,
};
#if defined (CY_USING_HAL)
	const cyhal_resource_inst_t ioss_0_port_6_pin_3_obj = 
	{
		.type = CYHAL_RSC_GPIO,
		.block_num = ioss_0_port_6_pin_3_PORT_NUM,
		.channel_num = ioss_0_port_6_pin_3_PIN,
	};
#endif //defined (CY_USING_HAL)
const cy_stc_gpio_pin_config_t CYBSP_SWO_config = 
{
	.outVal = 1,
	.driveMode = CY_GPIO_DM_STRONG_IN_OFF,
	.hsiom = CYBSP_SWO_HSIOM,
	.intEdge = CY_GPIO_INTR_DISABLE,
	.intMask = 0UL,
	.vtrip = CY_GPIO_VTRIP_CMOS,
	.slewRate = CY_GPIO_SLEW_FAST,
	.driveSel = CY_GPIO_DRIVE_1_2,
	.vregEn = 0UL,
	.ibufMode = 0UL,
	.vtripSel = 0UL,
	.vrefSel = 0UL,
	.vohSel = 0UL,
};
#if defined (CY_USING_HAL)
	const cyhal_resource_inst_t CYBSP_SWO_obj = 
	{
		.type = CYHAL_RSC_GPIO,
		.block_num = CYBSP_SWO_PORT_NUM,
		.channel_num = CYBSP_SWO_PIN,
	};
#endif //defined (CY_USING_HAL)
const cy_stc_gpio_pin_config_t CYBSP_SWDIO_config = 
{
	.outVal = 1,
	.driveMode = CY_GPIO_DM_PULLUP,
	.hsiom = CYBSP_SWDIO_HSIOM,
	.intEdge = CY_GPIO_INTR_DISABLE,
	.intMask = 0UL,
	.vtrip = CY_GPIO_VTRIP_CMOS,
	.slewRate = CY_GPIO_SLEW_FAST,
	.driveSel = CY_GPIO_DRIVE_1_2,
	.vregEn = 0UL,
	.ibufMode = 0UL,
	.vtripSel = 0UL,
	.vrefSel = 0UL,
	.vohSel = 0UL,
};
#if defined (CY_USING_HAL)
	const cyhal_resource_inst_t CYBSP_SWDIO_obj = 
	{
		.type = CYHAL_RSC_GPIO,
		.block_num = CYBSP_SWDIO_PORT_NUM,
		.channel_num = CYBSP_SWDIO_PIN,
	};
#endif //defined (CY_USING_HAL)
const cy_stc_gpio_pin_config_t CYBSP_SWDCK_config = 
{
	.outVal = 1,
	.driveMode = CY_GPIO_DM_PULLDOWN,
	.hsiom = CYBSP_SWDCK_HSIOM,
	.intEdge = CY_GPIO_INTR_DISABLE,
	.intMask = 0UL,
	.vtrip = CY_GPIO_VTRIP_CMOS,
	.slewRate = CY_GPIO_SLEW_FAST,
	.driveSel = CY_GPIO_DRIVE_1_2,
	.vregEn = 0UL,
	.ibufMode = 0UL,
	.vtripSel = 0UL,
	.vrefSel = 0UL,
	.vohSel = 0UL,
};
#if defined (CY_USING_HAL)
	const cyhal_resource_inst_t CYBSP_SWDCK_obj = 
	{
		.type = CYHAL_RSC_GPIO,
		.block_num = CYBSP_SWDCK_PORT_NUM,
		.channel_num = CYBSP_SWDCK_PIN,
	};
#endif //defined (CY_USING_HAL)
const cy_stc_gpio_pin_config_t CYBSP_CINA_config = 
{
	.outVal = 1,
	.driveMode = CY_GPIO_DM_ANALOG,
	.hsiom = CYBSP_CINA_HSIOM,
	.intEdge = CY_GPIO_INTR_DISABLE,
	.intMask = 0UL,
	.vtrip = CY_GPIO_VTRIP_CMOS,
	.slewRate = CY_GPIO_SLEW_FAST,
	.driveSel = CY_GPIO_DRIVE_1_2,
	.vregEn = 0UL,
	.ibufMode = 0UL,
	.vtripSel = 0UL,
	.vrefSel = 0UL,
	.vohSel = 0UL,
};
#if defined (CY_USING_HAL)
	const cyhal_resource_inst_t CYBSP_CINA_obj = 
	{
		.type = CYHAL_RSC_GPIO,
		.block_num = CYBSP_CINA_PORT_NUM,
		.channel_num = CYBSP_CINA_PIN,
	};
#endif //defined (CY_USING_HAL)
const cy_stc_gpio_pin_config_t CYBSP_CINB_config = 
{
	.outVal = 1,
	.driveMode = CY_GPIO_DM_ANALOG,
	.hsiom = CYBSP_CINB_HSIOM,
	.intEdge = CY_GPIO_INTR_DISABLE,
	.intMask = 0UL,
	.vtrip = CY_GPIO_VTRIP_CMOS,
	.slewRate = CY_GPIO_SLEW_FAST,
	.driveSel = CY_GPIO_DRIVE_1_2,
	.vregEn = 0UL,
	.ibufMode = 0UL,
	.vtripSel = 0UL,
	.vrefSel = 0UL,
	.vohSel = 0UL,
};
#if defined (CY_USING_HAL)
	const cyhal_resource_inst_t CYBSP_CINB_obj = 
	{
		.type = CYHAL_RSC_GPIO,
		.block_num = CYBSP_CINB_PORT_NUM,
		.channel_num = CYBSP_CINB_PIN,
	};
#endif //defined (CY_USING_HAL)
const cy_stc_gpio_pin_config_t CYBSP_CMOD_config = 
{
	.outVal = 1,
	.driveMode = CY_GPIO_DM_ANALOG,
	.hsiom = CYBSP_CMOD_HSIOM,
	.intEdge = CY_GPIO_INTR_DISABLE,
	.intMask = 0UL,
	.vtrip = CY_GPIO_VTRIP_CMOS,
	.slewRate = CY_GPIO_SLEW_FAST,
	.driveSel = CY_GPIO_DRIVE_1_2,
	.vregEn = 0UL,
	.ibufMode = 0UL,
	.vtripSel = 0UL,
	.vrefSel = 0UL,
	.vohSel = 0UL,
};
#if defined (CY_USING_HAL)
	const cyhal_resource_inst_t CYBSP_CMOD_obj = 
	{
		.type = CYHAL_RSC_GPIO,
		.block_num = CYBSP_CMOD_PORT_NUM,
		.channel_num = CYBSP_CMOD_PIN,
	};
#endif //defined (CY_USING_HAL)
const cy_stc_gpio_pin_config_t CYBSP_CSD_BTN0_config = 
{
	.outVal = 1,
	.driveMode = CY_GPIO_DM_ANALOG,
	.hsiom = CYBSP_CSD_BTN0_HSIOM,
	.intEdge = CY_GPIO_INTR_DISABLE,
	.intMask = 0UL,
	.vtrip = CY_GPIO_VTRIP_CMOS,
	.slewRate = CY_GPIO_SLEW_FAST,
	.driveSel = CY_GPIO_DRIVE_1_2,
	.vregEn = 0UL,
	.ibufMode = 0UL,
	.vtripSel = 0UL,
	.vrefSel = 0UL,
	.vohSel = 0UL,
};
#if defined (CY_USING_HAL)
	const cyhal_resource_inst_t CYBSP_CSD_BTN0_obj = 
	{
		.type = CYHAL_RSC_GPIO,
		.block_num = CYBSP_CSD_BTN0_PORT_NUM,
		.channel_num = CYBSP_CSD_BTN0_PIN,
	};
#endif //defined (CY_USING_HAL)
const cy_stc_gpio_pin_config_t CYBSP_CSD_BTN1_config = 
{
	.outVal = 1,
	.driveMode = CY_GPIO_DM_ANALOG,
	.hsiom = CYBSP_CSD_BTN1_HSIOM,
	.intEdge = CY_GPIO_INTR_DISABLE,
	.intMask = 0UL,
	.vtrip = CY_GPIO_VTRIP_CMOS,
	.slewRate = CY_GPIO_SLEW_FAST,
	.driveSel = CY_GPIO_DRIVE_1_2,
	.vregEn = 0UL,
	.ibufMode = 0UL,
	.vtripSel = 0UL,
	.vrefSel = 0UL,
	.vohSel = 0UL,
};
#if defined (CY_USING_HAL)
	const cyhal_resource_inst_t CYBSP_CSD_BTN1_obj = 
	{
		.type = CYHAL_RSC_GPIO,
		.block_num = CYBSP_CSD_BTN1_PORT_NUM,
		.channel_num = CYBSP_CSD_BTN1_PIN,
	};
#endif //defined (CY_USING_HAL)
const cy_stc_gpio_pin_config_t CYBSP_CSD_SLD0_config = 
{
	.outVal = 1,
	.driveMode = CY_GPIO_DM_ANALOG,
	.hsiom = CYBSP_CSD_SLD0_HSIOM,
	.intEdge = CY_GPIO_INTR_DISABLE,
	.intMask = 0UL,
	.vtrip = CY_GPIO_VTRIP_CMOS,
	.slewRate = CY_GPIO_SLEW_FAST,
	.driveSel = CY_GPIO_DRIVE_1_2,
	.vregEn = 0UL,
	.ibufMode = 0UL,
	.vtripSel = 0UL,
	.vrefSel = 0UL,
	.vohSel = 0UL,
};
#if defined (CY_USING_HAL)
	const cyhal_resource_inst_t CYBSP_CSD_SLD0_obj = 
	{
		.type = CYHAL_RSC_GPIO,
		.block_num = CYBSP_CSD_SLD0_PORT_NUM,
		.channel_num = CYBSP_CSD_SLD0_PIN,
	};
#endif //defined (CY_USING_HAL)
const cy_stc_gpio_pin_config_t CYBSP_CSD_SLD1_config = 
{
	.outVal = 1,
	.driveMode = CY_GPIO_DM_ANALOG,
	.hsiom = CYBSP_CSD_SLD1_HSIOM,
	.intEdge = CY_GPIO_INTR_DISABLE,
	.intMask = 0UL,
	.vtrip = CY_GPIO_VTRIP_CMOS,
	.slewRate = CY_GPIO_SLEW_FAST,
	.driveSel = CY_GPIO_DRIVE_1_2,
	.vregEn = 0UL,
	.ibufMode = 0UL,
	.vtripSel = 0UL,
	.vrefSel = 0UL,
	.vohSel = 0UL,
};
#if defined (CY_USING_HAL)
	const cyhal_resource_inst_t CYBSP_CSD_SLD1_obj = 
	{
		.type = CYHAL_RSC_GPIO,
		.block_num = CYBSP_CSD_SLD1_PORT_NUM,
		.channel_num = CYBSP_CSD_SLD1_PIN,
	};
#endif //defined (CY_USING_HAL)
const cy_stc_gpio_pin_config_t CYBSP_CSD_SLD2_config = 
{
	.outVal = 1,
	.driveMode = CY_GPIO_DM_ANALOG,
	.hsiom = CYBSP_CSD_SLD2_HSIOM,
	.intEdge = CY_GPIO_INTR_DISABLE,
	.intMask = 0UL,
	.vtrip = CY_GPIO_VTRIP_CMOS,
	.slewRate = CY_GPIO_SLEW_FAST,
	.driveSel = CY_GPIO_DRIVE_1_2,
	.vregEn = 0UL,
	.ibufMode = 0UL,
	.vtripSel = 0UL,
	.vrefSel = 0UL,
	.vohSel = 0UL,
};
#if defined (CY_USING_HAL)
	const cyhal_resource_inst_t CYBSP_CSD_SLD2_obj = 
	{
		.type = CYHAL_RSC_GPIO,
		.block_num = CYBSP_CSD_SLD2_PORT_NUM,
		.channel_num = CYBSP_CSD_SLD2_PIN,
	};
#endif //defined (CY_USING_HAL)
const cy_stc_gpio_pin_config_t CYBSP_CSD_SLD3_config = 
{
	.outVal = 1,
	.driveMode = CY_GPIO_DM_ANALOG,
	.hsiom = CYBSP_CSD_SLD3_HSIOM,
	.intEdge = CY_GPIO_INTR_DISABLE,
	.intMask = 0UL,
	.vtrip = CY_GPIO_VTRIP_CMOS,
	.slewRate = CY_GPIO_SLEW_FAST,
	.driveSel = CY_GPIO_DRIVE_1_2,
	.vregEn = 0UL,
	.ibufMode = 0UL,
	.vtripSel = 0UL,
	.vrefSel = 0UL,
	.vohSel = 0UL,
};
#if defined (CY_USING_HAL)
	const cyhal_resource_inst_t CYBSP_CSD_SLD3_obj = 
	{
		.type = CYHAL_RSC_GPIO,
		.block_num = CYBSP_CSD_SLD3_PORT_NUM,
		.channel_num = CYBSP_CSD_SLD3_PIN,
	};
#endif //defined (CY_USING_HAL)
const cy_stc_gpio_pin_config_t CYBSP_CSD_SLD4_config = 
{
	.outVal = 1,
	.driveMode = CY_GPIO_DM_ANALOG,
	.hsiom = CYBSP_CSD_SLD4_HSIOM,
	.intEdge = CY_GPIO_INTR_DISABLE,
	.intMask = 0UL,
	.vtrip = CY_GPIO_VTRIP_CMOS,
	.slewRate = CY_GPIO_SLEW_FAST,
	.driveSel = CY_GPIO_DRIVE_1_2,
	.vregEn = 0UL,
	.ibufMode = 0UL,
	.vtripSel = 0UL,
	.vrefSel = 0UL,
	.vohSel = 0UL,
};
#if defined (CY_USING_HAL)
	const cyhal_resource_inst_t CYBSP_CSD_SLD4_obj = 
	{
		.type = CYHAL_RSC_GPIO,
		.block_num = CYBSP_CSD_SLD4_PORT_NUM,
		.channel_num = CYBSP_CSD_SLD4_PIN,
	};
#endif //defined (CY_USING_HAL)
const cy_stc_gpio_pin_config_t ADC_SPI_MOSI_config = 
{
	.outVal = 1,
	.driveMode = CY_GPIO_DM_STRONG_IN_OFF,
	.hsiom = ADC_SPI_MOSI_HSIOM,
	.intEdge = CY_GPIO_INTR_DISABLE,
	.intMask = 0UL,
	.vtrip = CY_GPIO_VTRIP_CMOS,
	.slewRate = CY_GPIO_SLEW_FAST,
	.driveSel = CY_GPIO_DRIVE_1_8,
	.vregEn = 0UL,
	.ibufMode = 0UL,
	.vtripSel = 0UL,
	.vrefSel = 0UL,
	.vohSel = 0UL,
};
#if defined (CY_USING_HAL)
	const cyhal_resource_inst_t ADC_SPI_MOSI_obj = 
	{
		.type = CYHAL_RSC_GPIO,
		.block_num = ADC_SPI_MOSI_PORT_NUM,
		.channel_num = ADC_SPI_MOSI_PIN,
	};
#endif //defined (CY_USING_HAL)
const cy_stc_gpio_pin_config_t ADC_SPI_MISO_config = 
{
	.outVal = 1,
	.driveMode = CY_GPIO_DM_HIGHZ,
	.hsiom = ADC_SPI_MISO_HSIOM,
	.intEdge = CY_GPIO_INTR_DISABLE,
	.intMask = 0UL,
	.vtrip = CY_GPIO_VTRIP_CMOS,
	.slewRate = CY_GPIO_SLEW_FAST,
	.driveSel = CY_GPIO_DRIVE_1_8,
	.vregEn = 0UL,
	.ibufMode = 0UL,
	.vtripSel = 0UL,
	.vrefSel = 0UL,
	.vohSel = 0UL,
};
#if defined (CY_USING_HAL)
	const cyhal_resource_inst_t ADC_SPI_MISO_obj = 
	{
		.type = CYHAL_RSC_GPIO,
		.block_num = ADC_SPI_MISO_PORT_NUM,
		.channel_num = ADC_SPI_MISO_PIN,
	};
#endif //defined (CY_USING_HAL)
const cy_stc_gpio_pin_config_t ADC_SPI_CLK_config = 
{
	.outVal = 1,
	.driveMode = CY_GPIO_DM_STRONG_IN_OFF,
	.hsiom = ADC_SPI_CLK_HSIOM,
	.intEdge = CY_GPIO_INTR_DISABLE,
	.intMask = 0UL,
	.vtrip = CY_GPIO_VTRIP_CMOS,
	.slewRate = CY_GPIO_SLEW_FAST,
	.driveSel = CY_GPIO_DRIVE_1_8,
	.vregEn = 0UL,
	.ibufMode = 0UL,
	.vtripSel = 0UL,
	.vrefSel = 0UL,
	.vohSel = 0UL,
};
#if defined (CY_USING_HAL)
	const cyhal_resource_inst_t ADC_SPI_CLK_obj = 
	{
		.type = CYHAL_RSC_GPIO,
		.block_num = ADC_SPI_CLK_PORT_NUM,
		.channel_num = ADC_SPI_CLK_PIN,
	};
#endif //defined (CY_USING_HAL)
const cy_stc_gpio_pin_config_t ADC_nSYNC_nRESET_config = 
{
	.outVal = 0,
	.driveMode = CY_GPIO_DM_PULLUP_IN_OFF,
	.hsiom = ADC_nSYNC_nRESET_HSIOM,
	.intEdge = CY_GPIO_INTR_DISABLE,
	.intMask = 0UL,
	.vtrip = CY_GPIO_VTRIP_CMOS,
	.slewRate = CY_GPIO_SLEW_FAST,
	.driveSel = CY_GPIO_DRIVE_1_2,
	.vregEn = 0UL,
	.ibufMode = 0UL,
	.vtripSel = 0UL,
	.vrefSel = 0UL,
	.vohSel = 0UL,
};
#if defined (CY_USING_HAL)
	const cyhal_resource_inst_t ADC_nSYNC_nRESET_obj = 
	{
		.type = CYHAL_RSC_GPIO,
		.block_num = ADC_nSYNC_nRESET_PORT_NUM,
		.channel_num = ADC_nSYNC_nRESET_PIN,
	};
#endif //defined (CY_USING_HAL)
const cy_stc_gpio_pin_config_t ADC_SPI_nCS_config = 
{
	.outVal = 1,
	.driveMode = CY_GPIO_DM_STRONG_IN_OFF,
	.hsiom = ADC_SPI_nCS_HSIOM,
	.intEdge = CY_GPIO_INTR_DISABLE,
	.intMask = 0UL,
	.vtrip = CY_GPIO_VTRIP_CMOS,
	.slewRate = CY_GPIO_SLEW_FAST,
	.driveSel = CY_GPIO_DRIVE_1_8,
	.vregEn = 0UL,
	.ibufMode = 0UL,
	.vtripSel = 0UL,
	.vrefSel = 0UL,
	.vohSel = 0UL,
};
#if defined (CY_USING_HAL)
	const cyhal_resource_inst_t ADC_SPI_nCS_obj = 
	{
		.type = CYHAL_RSC_GPIO,
		.block_num = ADC_SPI_nCS_PORT_NUM,
		.channel_num = ADC_SPI_nCS_PIN,
	};
#endif //defined (CY_USING_HAL)


void init_cycfg_pins(void)
{
	Cy_GPIO_Pin_Init(CYBSP_WCO_IN_PORT, CYBSP_WCO_IN_PIN, &CYBSP_WCO_IN_config);
#if defined (CY_USING_HAL)
	cyhal_hwmgr_reserve(&CYBSP_WCO_IN_obj);
#endif //defined (CY_USING_HAL)

	Cy_GPIO_Pin_Init(CYBSP_WCO_OUT_PORT, CYBSP_WCO_OUT_PIN, &CYBSP_WCO_OUT_config);
#if defined (CY_USING_HAL)
	cyhal_hwmgr_reserve(&CYBSP_WCO_OUT_obj);
#endif //defined (CY_USING_HAL)

	Cy_GPIO_Pin_Init(ADC_CLOCK_OUT_PORT, ADC_CLOCK_OUT_PIN, &ADC_CLOCK_OUT_config);
#if defined (CY_USING_HAL)
	cyhal_hwmgr_reserve(&ADC_CLOCK_OUT_obj);
#endif //defined (CY_USING_HAL)

	Cy_GPIO_Pin_Init(UART_RX_PORT, UART_RX_PIN, &UART_RX_config);
#if defined (CY_USING_HAL)
	cyhal_hwmgr_reserve(&UART_RX_obj);
#endif //defined (CY_USING_HAL)

	Cy_GPIO_Pin_Init(UART_TX_PORT, UART_TX_PIN, &UART_TX_config);
#if defined (CY_USING_HAL)
	cyhal_hwmgr_reserve(&UART_TX_obj);
#endif //defined (CY_USING_HAL)

	Cy_GPIO_Pin_Init(CYBSP_USER_LED_PORT, CYBSP_USER_LED_PIN, &CYBSP_USER_LED_config);
#if defined (CY_USING_HAL)
	cyhal_hwmgr_reserve(&CYBSP_USER_LED_obj);
#endif //defined (CY_USING_HAL)

	Cy_GPIO_Pin_Init(ioss_0_port_14_pin_0_PORT, ioss_0_port_14_pin_0_PIN, &ioss_0_port_14_pin_0_config);
#if defined (CY_USING_HAL)
	cyhal_hwmgr_reserve(&ioss_0_port_14_pin_0_obj);
#endif //defined (CY_USING_HAL)

	Cy_GPIO_Pin_Init(ioss_0_port_14_pin_1_PORT, ioss_0_port_14_pin_1_PIN, &ioss_0_port_14_pin_1_config);
#if defined (CY_USING_HAL)
	cyhal_hwmgr_reserve(&ioss_0_port_14_pin_1_obj);
#endif //defined (CY_USING_HAL)

	Cy_GPIO_Pin_Init(CYBSP_CSD_TX_PORT, CYBSP_CSD_TX_PIN, &CYBSP_CSD_TX_config);
#if defined (CY_USING_HAL)
	cyhal_hwmgr_reserve(&CYBSP_CSD_TX_obj);
#endif //defined (CY_USING_HAL)

	Cy_GPIO_Pin_Init(ioss_0_port_6_pin_0_PORT, ioss_0_port_6_pin_0_PIN, &ioss_0_port_6_pin_0_config);
#if defined (CY_USING_HAL)
	cyhal_hwmgr_reserve(&ioss_0_port_6_pin_0_obj);
#endif //defined (CY_USING_HAL)

	Cy_GPIO_Pin_Init(ioss_0_port_6_pin_1_PORT, ioss_0_port_6_pin_1_PIN, &ioss_0_port_6_pin_1_config);
#if defined (CY_USING_HAL)
	cyhal_hwmgr_reserve(&ioss_0_port_6_pin_1_obj);
#endif //defined (CY_USING_HAL)

	Cy_GPIO_Pin_Init(ioss_0_port_6_pin_2_PORT, ioss_0_port_6_pin_2_PIN, &ioss_0_port_6_pin_2_config);
#if defined (CY_USING_HAL)
	cyhal_hwmgr_reserve(&ioss_0_port_6_pin_2_obj);
#endif //defined (CY_USING_HAL)

	Cy_GPIO_Pin_Init(ioss_0_port_6_pin_3_PORT, ioss_0_port_6_pin_3_PIN, &ioss_0_port_6_pin_3_config);
#if defined (CY_USING_HAL)
	cyhal_hwmgr_reserve(&ioss_0_port_6_pin_3_obj);
#endif //defined (CY_USING_HAL)

	Cy_GPIO_Pin_Init(CYBSP_SWO_PORT, CYBSP_SWO_PIN, &CYBSP_SWO_config);
#if defined (CY_USING_HAL)
	cyhal_hwmgr_reserve(&CYBSP_SWO_obj);
#endif //defined (CY_USING_HAL)

	Cy_GPIO_Pin_Init(CYBSP_SWDIO_PORT, CYBSP_SWDIO_PIN, &CYBSP_SWDIO_config);
#if defined (CY_USING_HAL)
	cyhal_hwmgr_reserve(&CYBSP_SWDIO_obj);
#endif //defined (CY_USING_HAL)

	Cy_GPIO_Pin_Init(CYBSP_SWDCK_PORT, CYBSP_SWDCK_PIN, &CYBSP_SWDCK_config);
#if defined (CY_USING_HAL)
	cyhal_hwmgr_reserve(&CYBSP_SWDCK_obj);
#endif //defined (CY_USING_HAL)

	Cy_GPIO_Pin_Init(CYBSP_CINA_PORT, CYBSP_CINA_PIN, &CYBSP_CINA_config);
#if defined (CY_USING_HAL)
	cyhal_hwmgr_reserve(&CYBSP_CINA_obj);
#endif //defined (CY_USING_HAL)

	Cy_GPIO_Pin_Init(CYBSP_CINB_PORT, CYBSP_CINB_PIN, &CYBSP_CINB_config);
#if defined (CY_USING_HAL)
	cyhal_hwmgr_reserve(&CYBSP_CINB_obj);
#endif //defined (CY_USING_HAL)

	Cy_GPIO_Pin_Init(CYBSP_CMOD_PORT, CYBSP_CMOD_PIN, &CYBSP_CMOD_config);
#if defined (CY_USING_HAL)
	cyhal_hwmgr_reserve(&CYBSP_CMOD_obj);
#endif //defined (CY_USING_HAL)

	Cy_GPIO_Pin_Init(CYBSP_CSD_BTN0_PORT, CYBSP_CSD_BTN0_PIN, &CYBSP_CSD_BTN0_config);
#if defined (CY_USING_HAL)
	cyhal_hwmgr_reserve(&CYBSP_CSD_BTN0_obj);
#endif //defined (CY_USING_HAL)

	Cy_GPIO_Pin_Init(CYBSP_CSD_BTN1_PORT, CYBSP_CSD_BTN1_PIN, &CYBSP_CSD_BTN1_config);
#if defined (CY_USING_HAL)
	cyhal_hwmgr_reserve(&CYBSP_CSD_BTN1_obj);
#endif //defined (CY_USING_HAL)

	Cy_GPIO_Pin_Init(CYBSP_CSD_SLD0_PORT, CYBSP_CSD_SLD0_PIN, &CYBSP_CSD_SLD0_config);
#if defined (CY_USING_HAL)
	cyhal_hwmgr_reserve(&CYBSP_CSD_SLD0_obj);
#endif //defined (CY_USING_HAL)

	Cy_GPIO_Pin_Init(CYBSP_CSD_SLD1_PORT, CYBSP_CSD_SLD1_PIN, &CYBSP_CSD_SLD1_config);
#if defined (CY_USING_HAL)
	cyhal_hwmgr_reserve(&CYBSP_CSD_SLD1_obj);
#endif //defined (CY_USING_HAL)

	Cy_GPIO_Pin_Init(CYBSP_CSD_SLD2_PORT, CYBSP_CSD_SLD2_PIN, &CYBSP_CSD_SLD2_config);
#if defined (CY_USING_HAL)
	cyhal_hwmgr_reserve(&CYBSP_CSD_SLD2_obj);
#endif //defined (CY_USING_HAL)

	Cy_GPIO_Pin_Init(CYBSP_CSD_SLD3_PORT, CYBSP_CSD_SLD3_PIN, &CYBSP_CSD_SLD3_config);
#if defined (CY_USING_HAL)
	cyhal_hwmgr_reserve(&CYBSP_CSD_SLD3_obj);
#endif //defined (CY_USING_HAL)

	Cy_GPIO_Pin_Init(CYBSP_CSD_SLD4_PORT, CYBSP_CSD_SLD4_PIN, &CYBSP_CSD_SLD4_config);
#if defined (CY_USING_HAL)
	cyhal_hwmgr_reserve(&CYBSP_CSD_SLD4_obj);
#endif //defined (CY_USING_HAL)

	Cy_GPIO_Pin_Init(ADC_SPI_MOSI_PORT, ADC_SPI_MOSI_PIN, &ADC_SPI_MOSI_config);
#if defined (CY_USING_HAL)
	cyhal_hwmgr_reserve(&ADC_SPI_MOSI_obj);
#endif //defined (CY_USING_HAL)

	Cy_GPIO_Pin_Init(ADC_SPI_MISO_PORT, ADC_SPI_MISO_PIN, &ADC_SPI_MISO_config);
#if defined (CY_USING_HAL)
	cyhal_hwmgr_reserve(&ADC_SPI_MISO_obj);
#endif //defined (CY_USING_HAL)

	Cy_GPIO_Pin_Init(ADC_SPI_CLK_PORT, ADC_SPI_CLK_PIN, &ADC_SPI_CLK_config);
#if defined (CY_USING_HAL)
	cyhal_hwmgr_reserve(&ADC_SPI_CLK_obj);
#endif //defined (CY_USING_HAL)

	Cy_GPIO_Pin_Init(ADC_nSYNC_nRESET_PORT, ADC_nSYNC_nRESET_PIN, &ADC_nSYNC_nRESET_config);
#if defined (CY_USING_HAL)
	cyhal_hwmgr_reserve(&ADC_nSYNC_nRESET_obj);
#endif //defined (CY_USING_HAL)

	Cy_GPIO_Pin_Init(ADC_SPI_nCS_PORT, ADC_SPI_nCS_PIN, &ADC_SPI_nCS_config);
#if defined (CY_USING_HAL)
	cyhal_hwmgr_reserve(&ADC_SPI_nCS_obj);
#endif //defined (CY_USING_HAL)
}
