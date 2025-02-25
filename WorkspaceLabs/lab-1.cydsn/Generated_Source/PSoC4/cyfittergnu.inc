/*******************************************************************************
* File Name: cyfittergnu.inc
* 
* PSoC Creator  4.4
*
* Description:
* 
* This file is automatically generated by PSoC Creator.
*
********************************************************************************
* Copyright (c) 2007-2020 Cypress Semiconductor.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
********************************************************************************/

.ifndef INCLUDED_CYFITTERGNU_INC
.set INCLUDED_CYFITTERGNU_INC, 1
.include "cydevicegnu_trm.inc"

/* LED */
.set LED__0__DR, CYREG_GPIO_PRT1_DR
.set LED__0__DR_CLR, CYREG_GPIO_PRT1_DR_CLR
.set LED__0__DR_INV, CYREG_GPIO_PRT1_DR_INV
.set LED__0__DR_SET, CYREG_GPIO_PRT1_DR_SET
.set LED__0__HSIOM, CYREG_HSIOM_PORT_SEL1
.set LED__0__HSIOM_MASK, 0x0F000000
.set LED__0__HSIOM_SHIFT, 24
.set LED__0__INTCFG, CYREG_GPIO_PRT1_INTR_CFG
.set LED__0__INTR, CYREG_GPIO_PRT1_INTR
.set LED__0__INTR_CFG, CYREG_GPIO_PRT1_INTR_CFG
.set LED__0__INTSTAT, CYREG_GPIO_PRT1_INTR
.set LED__0__MASK, 0x40
.set LED__0__PA__CFG0, CYREG_UDB_PA1_CFG0
.set LED__0__PA__CFG1, CYREG_UDB_PA1_CFG1
.set LED__0__PA__CFG10, CYREG_UDB_PA1_CFG10
.set LED__0__PA__CFG11, CYREG_UDB_PA1_CFG11
.set LED__0__PA__CFG12, CYREG_UDB_PA1_CFG12
.set LED__0__PA__CFG13, CYREG_UDB_PA1_CFG13
.set LED__0__PA__CFG14, CYREG_UDB_PA1_CFG14
.set LED__0__PA__CFG2, CYREG_UDB_PA1_CFG2
.set LED__0__PA__CFG3, CYREG_UDB_PA1_CFG3
.set LED__0__PA__CFG4, CYREG_UDB_PA1_CFG4
.set LED__0__PA__CFG5, CYREG_UDB_PA1_CFG5
.set LED__0__PA__CFG6, CYREG_UDB_PA1_CFG6
.set LED__0__PA__CFG7, CYREG_UDB_PA1_CFG7
.set LED__0__PA__CFG8, CYREG_UDB_PA1_CFG8
.set LED__0__PA__CFG9, CYREG_UDB_PA1_CFG9
.set LED__0__PC, CYREG_GPIO_PRT1_PC
.set LED__0__PC2, CYREG_GPIO_PRT1_PC2
.set LED__0__PORT, 1
.set LED__0__PS, CYREG_GPIO_PRT1_PS
.set LED__0__SHIFT, 6
.set LED__DR, CYREG_GPIO_PRT1_DR
.set LED__DR_CLR, CYREG_GPIO_PRT1_DR_CLR
.set LED__DR_INV, CYREG_GPIO_PRT1_DR_INV
.set LED__DR_SET, CYREG_GPIO_PRT1_DR_SET
.set LED__INTCFG, CYREG_GPIO_PRT1_INTR_CFG
.set LED__INTR, CYREG_GPIO_PRT1_INTR
.set LED__INTR_CFG, CYREG_GPIO_PRT1_INTR_CFG
.set LED__INTSTAT, CYREG_GPIO_PRT1_INTR
.set LED__MASK, 0x40
.set LED__PA__CFG0, CYREG_UDB_PA1_CFG0
.set LED__PA__CFG1, CYREG_UDB_PA1_CFG1
.set LED__PA__CFG10, CYREG_UDB_PA1_CFG10
.set LED__PA__CFG11, CYREG_UDB_PA1_CFG11
.set LED__PA__CFG12, CYREG_UDB_PA1_CFG12
.set LED__PA__CFG13, CYREG_UDB_PA1_CFG13
.set LED__PA__CFG14, CYREG_UDB_PA1_CFG14
.set LED__PA__CFG2, CYREG_UDB_PA1_CFG2
.set LED__PA__CFG3, CYREG_UDB_PA1_CFG3
.set LED__PA__CFG4, CYREG_UDB_PA1_CFG4
.set LED__PA__CFG5, CYREG_UDB_PA1_CFG5
.set LED__PA__CFG6, CYREG_UDB_PA1_CFG6
.set LED__PA__CFG7, CYREG_UDB_PA1_CFG7
.set LED__PA__CFG8, CYREG_UDB_PA1_CFG8
.set LED__PA__CFG9, CYREG_UDB_PA1_CFG9
.set LED__PC, CYREG_GPIO_PRT1_PC
.set LED__PC2, CYREG_GPIO_PRT1_PC2
.set LED__PORT, 1
.set LED__PS, CYREG_GPIO_PRT1_PS
.set LED__SHIFT, 6

/* But_1 */
.set But_1__0__DR, CYREG_GPIO_PRT0_DR
.set But_1__0__DR_CLR, CYREG_GPIO_PRT0_DR_CLR
.set But_1__0__DR_INV, CYREG_GPIO_PRT0_DR_INV
.set But_1__0__DR_SET, CYREG_GPIO_PRT0_DR_SET
.set But_1__0__HSIOM, CYREG_HSIOM_PORT_SEL0
.set But_1__0__HSIOM_MASK, 0xF0000000
.set But_1__0__HSIOM_SHIFT, 28
.set But_1__0__INTCFG, CYREG_GPIO_PRT0_INTR_CFG
.set But_1__0__INTR, CYREG_GPIO_PRT0_INTR
.set But_1__0__INTR_CFG, CYREG_GPIO_PRT0_INTR_CFG
.set But_1__0__INTSTAT, CYREG_GPIO_PRT0_INTR
.set But_1__0__MASK, 0x80
.set But_1__0__PA__CFG0, CYREG_UDB_PA0_CFG0
.set But_1__0__PA__CFG1, CYREG_UDB_PA0_CFG1
.set But_1__0__PA__CFG10, CYREG_UDB_PA0_CFG10
.set But_1__0__PA__CFG11, CYREG_UDB_PA0_CFG11
.set But_1__0__PA__CFG12, CYREG_UDB_PA0_CFG12
.set But_1__0__PA__CFG13, CYREG_UDB_PA0_CFG13
.set But_1__0__PA__CFG14, CYREG_UDB_PA0_CFG14
.set But_1__0__PA__CFG2, CYREG_UDB_PA0_CFG2
.set But_1__0__PA__CFG3, CYREG_UDB_PA0_CFG3
.set But_1__0__PA__CFG4, CYREG_UDB_PA0_CFG4
.set But_1__0__PA__CFG5, CYREG_UDB_PA0_CFG5
.set But_1__0__PA__CFG6, CYREG_UDB_PA0_CFG6
.set But_1__0__PA__CFG7, CYREG_UDB_PA0_CFG7
.set But_1__0__PA__CFG8, CYREG_UDB_PA0_CFG8
.set But_1__0__PA__CFG9, CYREG_UDB_PA0_CFG9
.set But_1__0__PC, CYREG_GPIO_PRT0_PC
.set But_1__0__PC2, CYREG_GPIO_PRT0_PC2
.set But_1__0__PORT, 0
.set But_1__0__PS, CYREG_GPIO_PRT0_PS
.set But_1__0__SHIFT, 7
.set But_1__DR, CYREG_GPIO_PRT0_DR
.set But_1__DR_CLR, CYREG_GPIO_PRT0_DR_CLR
.set But_1__DR_INV, CYREG_GPIO_PRT0_DR_INV
.set But_1__DR_SET, CYREG_GPIO_PRT0_DR_SET
.set But_1__INTCFG, CYREG_GPIO_PRT0_INTR_CFG
.set But_1__INTR, CYREG_GPIO_PRT0_INTR
.set But_1__INTR_CFG, CYREG_GPIO_PRT0_INTR_CFG
.set But_1__INTSTAT, CYREG_GPIO_PRT0_INTR
.set But_1__MASK, 0x80
.set But_1__PA__CFG0, CYREG_UDB_PA0_CFG0
.set But_1__PA__CFG1, CYREG_UDB_PA0_CFG1
.set But_1__PA__CFG10, CYREG_UDB_PA0_CFG10
.set But_1__PA__CFG11, CYREG_UDB_PA0_CFG11
.set But_1__PA__CFG12, CYREG_UDB_PA0_CFG12
.set But_1__PA__CFG13, CYREG_UDB_PA0_CFG13
.set But_1__PA__CFG14, CYREG_UDB_PA0_CFG14
.set But_1__PA__CFG2, CYREG_UDB_PA0_CFG2
.set But_1__PA__CFG3, CYREG_UDB_PA0_CFG3
.set But_1__PA__CFG4, CYREG_UDB_PA0_CFG4
.set But_1__PA__CFG5, CYREG_UDB_PA0_CFG5
.set But_1__PA__CFG6, CYREG_UDB_PA0_CFG6
.set But_1__PA__CFG7, CYREG_UDB_PA0_CFG7
.set But_1__PA__CFG8, CYREG_UDB_PA0_CFG8
.set But_1__PA__CFG9, CYREG_UDB_PA0_CFG9
.set But_1__PC, CYREG_GPIO_PRT0_PC
.set But_1__PC2, CYREG_GPIO_PRT0_PC2
.set But_1__PORT, 0
.set But_1__PS, CYREG_GPIO_PRT0_PS
.set But_1__SHIFT, 7

/* But_2 */
.set But_2__0__DR, CYREG_GPIO_PRT1_DR
.set But_2__0__DR_CLR, CYREG_GPIO_PRT1_DR_CLR
.set But_2__0__DR_INV, CYREG_GPIO_PRT1_DR_INV
.set But_2__0__DR_SET, CYREG_GPIO_PRT1_DR_SET
.set But_2__0__HSIOM, CYREG_HSIOM_PORT_SEL1
.set But_2__0__HSIOM_MASK, 0x0000000F
.set But_2__0__HSIOM_SHIFT, 0
.set But_2__0__INTCFG, CYREG_GPIO_PRT1_INTR_CFG
.set But_2__0__INTR, CYREG_GPIO_PRT1_INTR
.set But_2__0__INTR_CFG, CYREG_GPIO_PRT1_INTR_CFG
.set But_2__0__INTSTAT, CYREG_GPIO_PRT1_INTR
.set But_2__0__MASK, 0x01
.set But_2__0__PA__CFG0, CYREG_UDB_PA1_CFG0
.set But_2__0__PA__CFG1, CYREG_UDB_PA1_CFG1
.set But_2__0__PA__CFG10, CYREG_UDB_PA1_CFG10
.set But_2__0__PA__CFG11, CYREG_UDB_PA1_CFG11
.set But_2__0__PA__CFG12, CYREG_UDB_PA1_CFG12
.set But_2__0__PA__CFG13, CYREG_UDB_PA1_CFG13
.set But_2__0__PA__CFG14, CYREG_UDB_PA1_CFG14
.set But_2__0__PA__CFG2, CYREG_UDB_PA1_CFG2
.set But_2__0__PA__CFG3, CYREG_UDB_PA1_CFG3
.set But_2__0__PA__CFG4, CYREG_UDB_PA1_CFG4
.set But_2__0__PA__CFG5, CYREG_UDB_PA1_CFG5
.set But_2__0__PA__CFG6, CYREG_UDB_PA1_CFG6
.set But_2__0__PA__CFG7, CYREG_UDB_PA1_CFG7
.set But_2__0__PA__CFG8, CYREG_UDB_PA1_CFG8
.set But_2__0__PA__CFG9, CYREG_UDB_PA1_CFG9
.set But_2__0__PC, CYREG_GPIO_PRT1_PC
.set But_2__0__PC2, CYREG_GPIO_PRT1_PC2
.set But_2__0__PORT, 1
.set But_2__0__PS, CYREG_GPIO_PRT1_PS
.set But_2__0__SHIFT, 0
.set But_2__DR, CYREG_GPIO_PRT1_DR
.set But_2__DR_CLR, CYREG_GPIO_PRT1_DR_CLR
.set But_2__DR_INV, CYREG_GPIO_PRT1_DR_INV
.set But_2__DR_SET, CYREG_GPIO_PRT1_DR_SET
.set But_2__INTCFG, CYREG_GPIO_PRT1_INTR_CFG
.set But_2__INTR, CYREG_GPIO_PRT1_INTR
.set But_2__INTR_CFG, CYREG_GPIO_PRT1_INTR_CFG
.set But_2__INTSTAT, CYREG_GPIO_PRT1_INTR
.set But_2__MASK, 0x01
.set But_2__PA__CFG0, CYREG_UDB_PA1_CFG0
.set But_2__PA__CFG1, CYREG_UDB_PA1_CFG1
.set But_2__PA__CFG10, CYREG_UDB_PA1_CFG10
.set But_2__PA__CFG11, CYREG_UDB_PA1_CFG11
.set But_2__PA__CFG12, CYREG_UDB_PA1_CFG12
.set But_2__PA__CFG13, CYREG_UDB_PA1_CFG13
.set But_2__PA__CFG14, CYREG_UDB_PA1_CFG14
.set But_2__PA__CFG2, CYREG_UDB_PA1_CFG2
.set But_2__PA__CFG3, CYREG_UDB_PA1_CFG3
.set But_2__PA__CFG4, CYREG_UDB_PA1_CFG4
.set But_2__PA__CFG5, CYREG_UDB_PA1_CFG5
.set But_2__PA__CFG6, CYREG_UDB_PA1_CFG6
.set But_2__PA__CFG7, CYREG_UDB_PA1_CFG7
.set But_2__PA__CFG8, CYREG_UDB_PA1_CFG8
.set But_2__PA__CFG9, CYREG_UDB_PA1_CFG9
.set But_2__PC, CYREG_GPIO_PRT1_PC
.set But_2__PC2, CYREG_GPIO_PRT1_PC2
.set But_2__PORT, 1
.set But_2__PS, CYREG_GPIO_PRT1_PS
.set But_2__SHIFT, 0

/* But_3 */
.set But_3__0__DR, CYREG_GPIO_PRT1_DR
.set But_3__0__DR_CLR, CYREG_GPIO_PRT1_DR_CLR
.set But_3__0__DR_INV, CYREG_GPIO_PRT1_DR_INV
.set But_3__0__DR_SET, CYREG_GPIO_PRT1_DR_SET
.set But_3__0__HSIOM, CYREG_HSIOM_PORT_SEL1
.set But_3__0__HSIOM_MASK, 0x000000F0
.set But_3__0__HSIOM_SHIFT, 4
.set But_3__0__INTCFG, CYREG_GPIO_PRT1_INTR_CFG
.set But_3__0__INTR, CYREG_GPIO_PRT1_INTR
.set But_3__0__INTR_CFG, CYREG_GPIO_PRT1_INTR_CFG
.set But_3__0__INTSTAT, CYREG_GPIO_PRT1_INTR
.set But_3__0__MASK, 0x02
.set But_3__0__PA__CFG0, CYREG_UDB_PA1_CFG0
.set But_3__0__PA__CFG1, CYREG_UDB_PA1_CFG1
.set But_3__0__PA__CFG10, CYREG_UDB_PA1_CFG10
.set But_3__0__PA__CFG11, CYREG_UDB_PA1_CFG11
.set But_3__0__PA__CFG12, CYREG_UDB_PA1_CFG12
.set But_3__0__PA__CFG13, CYREG_UDB_PA1_CFG13
.set But_3__0__PA__CFG14, CYREG_UDB_PA1_CFG14
.set But_3__0__PA__CFG2, CYREG_UDB_PA1_CFG2
.set But_3__0__PA__CFG3, CYREG_UDB_PA1_CFG3
.set But_3__0__PA__CFG4, CYREG_UDB_PA1_CFG4
.set But_3__0__PA__CFG5, CYREG_UDB_PA1_CFG5
.set But_3__0__PA__CFG6, CYREG_UDB_PA1_CFG6
.set But_3__0__PA__CFG7, CYREG_UDB_PA1_CFG7
.set But_3__0__PA__CFG8, CYREG_UDB_PA1_CFG8
.set But_3__0__PA__CFG9, CYREG_UDB_PA1_CFG9
.set But_3__0__PC, CYREG_GPIO_PRT1_PC
.set But_3__0__PC2, CYREG_GPIO_PRT1_PC2
.set But_3__0__PORT, 1
.set But_3__0__PS, CYREG_GPIO_PRT1_PS
.set But_3__0__SHIFT, 1
.set But_3__DR, CYREG_GPIO_PRT1_DR
.set But_3__DR_CLR, CYREG_GPIO_PRT1_DR_CLR
.set But_3__DR_INV, CYREG_GPIO_PRT1_DR_INV
.set But_3__DR_SET, CYREG_GPIO_PRT1_DR_SET
.set But_3__INTCFG, CYREG_GPIO_PRT1_INTR_CFG
.set But_3__INTR, CYREG_GPIO_PRT1_INTR
.set But_3__INTR_CFG, CYREG_GPIO_PRT1_INTR_CFG
.set But_3__INTSTAT, CYREG_GPIO_PRT1_INTR
.set But_3__MASK, 0x02
.set But_3__PA__CFG0, CYREG_UDB_PA1_CFG0
.set But_3__PA__CFG1, CYREG_UDB_PA1_CFG1
.set But_3__PA__CFG10, CYREG_UDB_PA1_CFG10
.set But_3__PA__CFG11, CYREG_UDB_PA1_CFG11
.set But_3__PA__CFG12, CYREG_UDB_PA1_CFG12
.set But_3__PA__CFG13, CYREG_UDB_PA1_CFG13
.set But_3__PA__CFG14, CYREG_UDB_PA1_CFG14
.set But_3__PA__CFG2, CYREG_UDB_PA1_CFG2
.set But_3__PA__CFG3, CYREG_UDB_PA1_CFG3
.set But_3__PA__CFG4, CYREG_UDB_PA1_CFG4
.set But_3__PA__CFG5, CYREG_UDB_PA1_CFG5
.set But_3__PA__CFG6, CYREG_UDB_PA1_CFG6
.set But_3__PA__CFG7, CYREG_UDB_PA1_CFG7
.set But_3__PA__CFG8, CYREG_UDB_PA1_CFG8
.set But_3__PA__CFG9, CYREG_UDB_PA1_CFG9
.set But_3__PC, CYREG_GPIO_PRT1_PC
.set But_3__PC2, CYREG_GPIO_PRT1_PC2
.set But_3__PORT, 1
.set But_3__PS, CYREG_GPIO_PRT1_PS
.set But_3__SHIFT, 1

/* But_4 */
.set But_4__0__DR, CYREG_GPIO_PRT1_DR
.set But_4__0__DR_CLR, CYREG_GPIO_PRT1_DR_CLR
.set But_4__0__DR_INV, CYREG_GPIO_PRT1_DR_INV
.set But_4__0__DR_SET, CYREG_GPIO_PRT1_DR_SET
.set But_4__0__HSIOM, CYREG_HSIOM_PORT_SEL1
.set But_4__0__HSIOM_MASK, 0x00000F00
.set But_4__0__HSIOM_SHIFT, 8
.set But_4__0__INTCFG, CYREG_GPIO_PRT1_INTR_CFG
.set But_4__0__INTR, CYREG_GPIO_PRT1_INTR
.set But_4__0__INTR_CFG, CYREG_GPIO_PRT1_INTR_CFG
.set But_4__0__INTSTAT, CYREG_GPIO_PRT1_INTR
.set But_4__0__MASK, 0x04
.set But_4__0__PA__CFG0, CYREG_UDB_PA1_CFG0
.set But_4__0__PA__CFG1, CYREG_UDB_PA1_CFG1
.set But_4__0__PA__CFG10, CYREG_UDB_PA1_CFG10
.set But_4__0__PA__CFG11, CYREG_UDB_PA1_CFG11
.set But_4__0__PA__CFG12, CYREG_UDB_PA1_CFG12
.set But_4__0__PA__CFG13, CYREG_UDB_PA1_CFG13
.set But_4__0__PA__CFG14, CYREG_UDB_PA1_CFG14
.set But_4__0__PA__CFG2, CYREG_UDB_PA1_CFG2
.set But_4__0__PA__CFG3, CYREG_UDB_PA1_CFG3
.set But_4__0__PA__CFG4, CYREG_UDB_PA1_CFG4
.set But_4__0__PA__CFG5, CYREG_UDB_PA1_CFG5
.set But_4__0__PA__CFG6, CYREG_UDB_PA1_CFG6
.set But_4__0__PA__CFG7, CYREG_UDB_PA1_CFG7
.set But_4__0__PA__CFG8, CYREG_UDB_PA1_CFG8
.set But_4__0__PA__CFG9, CYREG_UDB_PA1_CFG9
.set But_4__0__PC, CYREG_GPIO_PRT1_PC
.set But_4__0__PC2, CYREG_GPIO_PRT1_PC2
.set But_4__0__PORT, 1
.set But_4__0__PS, CYREG_GPIO_PRT1_PS
.set But_4__0__SHIFT, 2
.set But_4__DR, CYREG_GPIO_PRT1_DR
.set But_4__DR_CLR, CYREG_GPIO_PRT1_DR_CLR
.set But_4__DR_INV, CYREG_GPIO_PRT1_DR_INV
.set But_4__DR_SET, CYREG_GPIO_PRT1_DR_SET
.set But_4__INTCFG, CYREG_GPIO_PRT1_INTR_CFG
.set But_4__INTR, CYREG_GPIO_PRT1_INTR
.set But_4__INTR_CFG, CYREG_GPIO_PRT1_INTR_CFG
.set But_4__INTSTAT, CYREG_GPIO_PRT1_INTR
.set But_4__MASK, 0x04
.set But_4__PA__CFG0, CYREG_UDB_PA1_CFG0
.set But_4__PA__CFG1, CYREG_UDB_PA1_CFG1
.set But_4__PA__CFG10, CYREG_UDB_PA1_CFG10
.set But_4__PA__CFG11, CYREG_UDB_PA1_CFG11
.set But_4__PA__CFG12, CYREG_UDB_PA1_CFG12
.set But_4__PA__CFG13, CYREG_UDB_PA1_CFG13
.set But_4__PA__CFG14, CYREG_UDB_PA1_CFG14
.set But_4__PA__CFG2, CYREG_UDB_PA1_CFG2
.set But_4__PA__CFG3, CYREG_UDB_PA1_CFG3
.set But_4__PA__CFG4, CYREG_UDB_PA1_CFG4
.set But_4__PA__CFG5, CYREG_UDB_PA1_CFG5
.set But_4__PA__CFG6, CYREG_UDB_PA1_CFG6
.set But_4__PA__CFG7, CYREG_UDB_PA1_CFG7
.set But_4__PA__CFG8, CYREG_UDB_PA1_CFG8
.set But_4__PA__CFG9, CYREG_UDB_PA1_CFG9
.set But_4__PC, CYREG_GPIO_PRT1_PC
.set But_4__PC2, CYREG_GPIO_PRT1_PC2
.set But_4__PORT, 1
.set But_4__PS, CYREG_GPIO_PRT1_PS
.set But_4__SHIFT, 2

/* But_5 */
.set But_5__0__DR, CYREG_GPIO_PRT1_DR
.set But_5__0__DR_CLR, CYREG_GPIO_PRT1_DR_CLR
.set But_5__0__DR_INV, CYREG_GPIO_PRT1_DR_INV
.set But_5__0__DR_SET, CYREG_GPIO_PRT1_DR_SET
.set But_5__0__HSIOM, CYREG_HSIOM_PORT_SEL1
.set But_5__0__HSIOM_MASK, 0x0000F000
.set But_5__0__HSIOM_SHIFT, 12
.set But_5__0__INTCFG, CYREG_GPIO_PRT1_INTR_CFG
.set But_5__0__INTR, CYREG_GPIO_PRT1_INTR
.set But_5__0__INTR_CFG, CYREG_GPIO_PRT1_INTR_CFG
.set But_5__0__INTSTAT, CYREG_GPIO_PRT1_INTR
.set But_5__0__MASK, 0x08
.set But_5__0__PA__CFG0, CYREG_UDB_PA1_CFG0
.set But_5__0__PA__CFG1, CYREG_UDB_PA1_CFG1
.set But_5__0__PA__CFG10, CYREG_UDB_PA1_CFG10
.set But_5__0__PA__CFG11, CYREG_UDB_PA1_CFG11
.set But_5__0__PA__CFG12, CYREG_UDB_PA1_CFG12
.set But_5__0__PA__CFG13, CYREG_UDB_PA1_CFG13
.set But_5__0__PA__CFG14, CYREG_UDB_PA1_CFG14
.set But_5__0__PA__CFG2, CYREG_UDB_PA1_CFG2
.set But_5__0__PA__CFG3, CYREG_UDB_PA1_CFG3
.set But_5__0__PA__CFG4, CYREG_UDB_PA1_CFG4
.set But_5__0__PA__CFG5, CYREG_UDB_PA1_CFG5
.set But_5__0__PA__CFG6, CYREG_UDB_PA1_CFG6
.set But_5__0__PA__CFG7, CYREG_UDB_PA1_CFG7
.set But_5__0__PA__CFG8, CYREG_UDB_PA1_CFG8
.set But_5__0__PA__CFG9, CYREG_UDB_PA1_CFG9
.set But_5__0__PC, CYREG_GPIO_PRT1_PC
.set But_5__0__PC2, CYREG_GPIO_PRT1_PC2
.set But_5__0__PORT, 1
.set But_5__0__PS, CYREG_GPIO_PRT1_PS
.set But_5__0__SHIFT, 3
.set But_5__DR, CYREG_GPIO_PRT1_DR
.set But_5__DR_CLR, CYREG_GPIO_PRT1_DR_CLR
.set But_5__DR_INV, CYREG_GPIO_PRT1_DR_INV
.set But_5__DR_SET, CYREG_GPIO_PRT1_DR_SET
.set But_5__INTCFG, CYREG_GPIO_PRT1_INTR_CFG
.set But_5__INTR, CYREG_GPIO_PRT1_INTR
.set But_5__INTR_CFG, CYREG_GPIO_PRT1_INTR_CFG
.set But_5__INTSTAT, CYREG_GPIO_PRT1_INTR
.set But_5__MASK, 0x08
.set But_5__PA__CFG0, CYREG_UDB_PA1_CFG0
.set But_5__PA__CFG1, CYREG_UDB_PA1_CFG1
.set But_5__PA__CFG10, CYREG_UDB_PA1_CFG10
.set But_5__PA__CFG11, CYREG_UDB_PA1_CFG11
.set But_5__PA__CFG12, CYREG_UDB_PA1_CFG12
.set But_5__PA__CFG13, CYREG_UDB_PA1_CFG13
.set But_5__PA__CFG14, CYREG_UDB_PA1_CFG14
.set But_5__PA__CFG2, CYREG_UDB_PA1_CFG2
.set But_5__PA__CFG3, CYREG_UDB_PA1_CFG3
.set But_5__PA__CFG4, CYREG_UDB_PA1_CFG4
.set But_5__PA__CFG5, CYREG_UDB_PA1_CFG5
.set But_5__PA__CFG6, CYREG_UDB_PA1_CFG6
.set But_5__PA__CFG7, CYREG_UDB_PA1_CFG7
.set But_5__PA__CFG8, CYREG_UDB_PA1_CFG8
.set But_5__PA__CFG9, CYREG_UDB_PA1_CFG9
.set But_5__PC, CYREG_GPIO_PRT1_PC
.set But_5__PC2, CYREG_GPIO_PRT1_PC2
.set But_5__PORT, 1
.set But_5__PS, CYREG_GPIO_PRT1_PS
.set But_5__SHIFT, 3

/* Clock_1 */
.set Clock_1__DIV_ID, 0x00000040
.set Clock_1__DIV_REGISTER, CYREG_PERI_DIV_16_CTL0
.set Clock_1__PA_DIV_ID, 0x000000FF

/* Input_Buttons */
.set Input_Buttons_sts_sts_reg__0__MASK, 0x01
.set Input_Buttons_sts_sts_reg__0__POS, 0
.set Input_Buttons_sts_sts_reg__1__MASK, 0x02
.set Input_Buttons_sts_sts_reg__1__POS, 1
.set Input_Buttons_sts_sts_reg__16BIT_STATUS_AUX_CTL_REG, CYREG_UDB_W16_ACTL2
.set Input_Buttons_sts_sts_reg__16BIT_STATUS_REG, CYREG_UDB_W16_ST2
.set Input_Buttons_sts_sts_reg__2__MASK, 0x04
.set Input_Buttons_sts_sts_reg__2__POS, 2
.set Input_Buttons_sts_sts_reg__3__MASK, 0x08
.set Input_Buttons_sts_sts_reg__3__POS, 3
.set Input_Buttons_sts_sts_reg__4__MASK, 0x10
.set Input_Buttons_sts_sts_reg__4__POS, 4
.set Input_Buttons_sts_sts_reg__MASK, 0x1F
.set Input_Buttons_sts_sts_reg__MASK_REG, CYREG_UDB_W8_MSK2
.set Input_Buttons_sts_sts_reg__STATUS_AUX_CTL_REG, CYREG_UDB_W8_ACTL2
.set Input_Buttons_sts_sts_reg__STATUS_REG, CYREG_UDB_W8_ST2

/* Miscellaneous */
.set CYDEV_BCLK__HFCLK__HZ, 48000000
.set CYDEV_BCLK__HFCLK__KHZ, 48000
.set CYDEV_BCLK__HFCLK__MHZ, 48
.set CYDEV_BCLK__SYSCLK__HZ, 48000000
.set CYDEV_BCLK__SYSCLK__KHZ, 48000
.set CYDEV_BCLK__SYSCLK__MHZ, 48
.set CYDEV_CHIP_DIE_LEOPARD, 1
.set CYDEV_CHIP_DIE_PSOC4A, 26
.set CYDEV_CHIP_DIE_PSOC5LP, 2
.set CYDEV_CHIP_DIE_PSOC5TM, 3
.set CYDEV_CHIP_DIE_TMA4, 4
.set CYDEV_CHIP_DIE_UNKNOWN, 0
.set CYDEV_CHIP_FAMILY_FM0P, 5
.set CYDEV_CHIP_FAMILY_FM3, 6
.set CYDEV_CHIP_FAMILY_FM4, 7
.set CYDEV_CHIP_FAMILY_PSOC3, 1
.set CYDEV_CHIP_FAMILY_PSOC4, 2
.set CYDEV_CHIP_FAMILY_PSOC5, 3
.set CYDEV_CHIP_FAMILY_PSOC6, 4
.set CYDEV_CHIP_FAMILY_UNKNOWN, 0
.set CYDEV_CHIP_FAMILY_USED, CYDEV_CHIP_FAMILY_PSOC4
.set CYDEV_CHIP_JTAG_ID, 0x112D11A1
.set CYDEV_CHIP_MEMBER_3A, 1
.set CYDEV_CHIP_MEMBER_4A, 26
.set CYDEV_CHIP_MEMBER_4AA, 25
.set CYDEV_CHIP_MEMBER_4AB, 30
.set CYDEV_CHIP_MEMBER_4AC, 14
.set CYDEV_CHIP_MEMBER_4AD, 15
.set CYDEV_CHIP_MEMBER_4AE, 16
.set CYDEV_CHIP_MEMBER_4D, 20
.set CYDEV_CHIP_MEMBER_4E, 6
.set CYDEV_CHIP_MEMBER_4F, 27
.set CYDEV_CHIP_MEMBER_4G, 4
.set CYDEV_CHIP_MEMBER_4H, 24
.set CYDEV_CHIP_MEMBER_4I, 32
.set CYDEV_CHIP_MEMBER_4J, 21
.set CYDEV_CHIP_MEMBER_4K, 22
.set CYDEV_CHIP_MEMBER_4L, 31
.set CYDEV_CHIP_MEMBER_4M, 29
.set CYDEV_CHIP_MEMBER_4N, 11
.set CYDEV_CHIP_MEMBER_4O, 8
.set CYDEV_CHIP_MEMBER_4P, 28
.set CYDEV_CHIP_MEMBER_4Q, 17
.set CYDEV_CHIP_MEMBER_4R, 9
.set CYDEV_CHIP_MEMBER_4S, 12
.set CYDEV_CHIP_MEMBER_4T, 10
.set CYDEV_CHIP_MEMBER_4U, 5
.set CYDEV_CHIP_MEMBER_4V, 23
.set CYDEV_CHIP_MEMBER_4W, 13
.set CYDEV_CHIP_MEMBER_4X, 7
.set CYDEV_CHIP_MEMBER_4Y, 18
.set CYDEV_CHIP_MEMBER_4Z, 19
.set CYDEV_CHIP_MEMBER_5A, 3
.set CYDEV_CHIP_MEMBER_5B, 2
.set CYDEV_CHIP_MEMBER_6A, 33
.set CYDEV_CHIP_MEMBER_FM3, 37
.set CYDEV_CHIP_MEMBER_FM4, 38
.set CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE1, 34
.set CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE2, 35
.set CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE3, 36
.set CYDEV_CHIP_MEMBER_UNKNOWN, 0
.set CYDEV_CHIP_MEMBER_USED, CYDEV_CHIP_MEMBER_4M
.set CYDEV_CHIP_DIE_EXPECT, CYDEV_CHIP_MEMBER_USED
.set CYDEV_CHIP_DIE_ACTUAL, CYDEV_CHIP_DIE_EXPECT
.set CYDEV_CHIP_REV_LEOPARD_ES1, 0
.set CYDEV_CHIP_REV_LEOPARD_ES2, 1
.set CYDEV_CHIP_REV_LEOPARD_ES3, 3
.set CYDEV_CHIP_REV_LEOPARD_PRODUCTION, 3
.set CYDEV_CHIP_REV_PSOC4A_ES0, 17
.set CYDEV_CHIP_REV_PSOC4A_PRODUCTION, 17
.set CYDEV_CHIP_REV_PSOC5LP_ES0, 0
.set CYDEV_CHIP_REV_PSOC5LP_PRODUCTION, 0
.set CYDEV_CHIP_REV_PSOC5TM_ES0, 0
.set CYDEV_CHIP_REV_PSOC5TM_ES1, 1
.set CYDEV_CHIP_REV_PSOC5TM_PRODUCTION, 1
.set CYDEV_CHIP_REV_TMA4_ES, 17
.set CYDEV_CHIP_REV_TMA4_ES2, 33
.set CYDEV_CHIP_REV_TMA4_PRODUCTION, 17
.set CYDEV_CHIP_REVISION_3A_ES1, 0
.set CYDEV_CHIP_REVISION_3A_ES2, 1
.set CYDEV_CHIP_REVISION_3A_ES3, 3
.set CYDEV_CHIP_REVISION_3A_PRODUCTION, 3
.set CYDEV_CHIP_REVISION_4A_ES0, 17
.set CYDEV_CHIP_REVISION_4A_PRODUCTION, 17
.set CYDEV_CHIP_REVISION_4AA_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4AB_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4AC_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4AD_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4AE_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4D_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4E_CCG2_NO_USBPD, 0
.set CYDEV_CHIP_REVISION_4E_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4F_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4F_PRODUCTION_256DMA, 0
.set CYDEV_CHIP_REVISION_4F_PRODUCTION_256K, 0
.set CYDEV_CHIP_REVISION_4G_ES, 17
.set CYDEV_CHIP_REVISION_4G_ES2, 33
.set CYDEV_CHIP_REVISION_4G_PRODUCTION, 17
.set CYDEV_CHIP_REVISION_4H_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4I_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4J_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4K_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4L_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4M_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4N_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4O_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4P_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4Q_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4R_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4S_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4T_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4U_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4V_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4W_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4X_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4Y_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4Z_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_5A_ES0, 0
.set CYDEV_CHIP_REVISION_5A_ES1, 1
.set CYDEV_CHIP_REVISION_5A_PRODUCTION, 1
.set CYDEV_CHIP_REVISION_5B_ES0, 0
.set CYDEV_CHIP_REVISION_5B_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_6A_ES, 17
.set CYDEV_CHIP_REVISION_6A_NO_UDB, 33
.set CYDEV_CHIP_REVISION_6A_PRODUCTION, 33
.set CYDEV_CHIP_REVISION_FM3_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_FM4_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_PDL_FM0P_TYPE1_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_PDL_FM0P_TYPE2_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_PDL_FM0P_TYPE3_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_USED, CYDEV_CHIP_REVISION_4M_PRODUCTION
.set CYDEV_CHIP_REV_EXPECT, CYDEV_CHIP_REVISION_USED
.set CYDEV_CONFIG_READ_ACCELERATOR, 1
.set CYDEV_CONFIG_UNUSED_IO_AllowButWarn, 0
.set CYDEV_CONFIG_UNUSED_IO_AllowWithInfo, 1
.set CYDEV_CONFIG_UNUSED_IO_Disallowed, 2
.set CYDEV_CONFIG_UNUSED_IO, CYDEV_CONFIG_UNUSED_IO_Disallowed
.set CYDEV_CONFIGURATION_COMPRESSED, 1
.set CYDEV_CONFIGURATION_MODE_COMPRESSED, 0
.set CYDEV_CONFIGURATION_MODE, CYDEV_CONFIGURATION_MODE_COMPRESSED
.set CYDEV_CONFIGURATION_MODE_DMA, 2
.set CYDEV_CONFIGURATION_MODE_UNCOMPRESSED, 1
.set CYDEV_DEBUG_PROTECT_KILL, 4
.set CYDEV_DEBUG_PROTECT_OPEN, 1
.set CYDEV_DEBUG_PROTECT, CYDEV_DEBUG_PROTECT_OPEN
.set CYDEV_DEBUG_PROTECT_PROTECTED, 2
.set CYDEV_DEBUGGING_DPS_Disable, 3
.set CYDEV_DEBUGGING_DPS_SWD, 2
.set CYDEV_DEBUGGING_DPS, CYDEV_DEBUGGING_DPS_SWD
.set CYDEV_DEBUGGING_ENABLE, 1
.set CYDEV_DFT_SELECT_CLK0, 10
.set CYDEV_DFT_SELECT_CLK1, 11
.set CYDEV_DMA_CHANNELS_AVAILABLE, 8
.set CYDEV_HEAP_SIZE, 0x80
.set CYDEV_IMO_TRIMMED_BY_USB, 0
.set CYDEV_IMO_TRIMMED_BY_WCO, 0
.set CYDEV_INTR_NUMBER_DMA, 13
.set CYDEV_IS_EXPORTING_CODE, 0
.set CYDEV_IS_IMPORTING_CODE, 0
.set CYDEV_PROJ_TYPE, 0
.set CYDEV_PROJ_TYPE_BOOTLOADER, 1
.set CYDEV_PROJ_TYPE_LAUNCHER, 5
.set CYDEV_PROJ_TYPE_LOADABLE, 2
.set CYDEV_PROJ_TYPE_LOADABLEANDBOOTLOADER, 4
.set CYDEV_PROJ_TYPE_MULTIAPPBOOTLOADER, 3
.set CYDEV_PROJ_TYPE_STANDARD, 0
.set CYDEV_STACK_SIZE, 0x0800
.set CYDEV_USE_BUNDLED_CMSIS, 1
.set CYDEV_VARIABLE_VDDA, 1
.set CYDEV_VDDA_MV, 3300
.set CYDEV_VDDD_MV, 3300
.set CYDEV_VDDIO_MV, 3300
.set CYDEV_WDT_GENERATE_ISR, 1
.set CYIPBLOCK_m0s8can_VERSION, 1
.set CYIPBLOCK_m0s8cpussv2_VERSION, 1
.set CYIPBLOCK_m0s8csd_VERSION, 1
.set CYIPBLOCK_m0s8ioss_VERSION, 1
.set CYIPBLOCK_m0s8lcd_VERSION, 2
.set CYIPBLOCK_m0s8lpcomp_VERSION, 2
.set CYIPBLOCK_m0s8peri_VERSION, 1
.set CYIPBLOCK_m0s8scb_VERSION, 2
.set CYIPBLOCK_m0s8srssv2_VERSION, 1
.set CYIPBLOCK_m0s8tcpwm_VERSION, 2
.set CYIPBLOCK_m0s8udbif_VERSION, 1
.set CYIPBLOCK_m0s8wco_VERSION, 1
.set CYIPBLOCK_s8pass4al_VERSION, 1
.set DMA_CHANNELS_USED__MASK, 0
.set CYDEV_BOOTLOADER_ENABLE, 0
.endif
