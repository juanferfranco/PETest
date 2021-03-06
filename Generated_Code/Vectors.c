/** ###################################################################
**     THIS COMPONENT MODULE IS GENERATED BY THE TOOL. DO NOT MODIFY IT.
**     Filename    : Vectors.c
**     Project     : ProcessorExpert
**     Processor   : MC9S08PT8VLD
**     Version     : Component 01.105, Driver 01.40, CPU db: 3.00.000
**     Compiler    : CodeWarrior HCS08 C Compiler
**     Date/Time   : 2013-12-13, 08:23, # CodeGen: 0
**     Abstract    :
**         This component "MC9S08PT16_44" contains initialization 
**         of the CPU and provides basic methods and events for 
**         CPU core settings.
**     Settings    :
**
**
**     Copyright : 1997 - 2013 Freescale Semiconductor, Inc. All Rights Reserved.
**     SOURCE DISTRIBUTION PERMISSIBLE as directed in End User License Agreement.
**     
**     http      : www.freescale.com
**     mail      : support@freescale.com
** ###################################################################*/
/*!
** @file Vectors.c                                                  
** @version 01.40
** @brief
**         This component "MC9S08PT16_44" contains initialization 
**         of the CPU and provides basic methods and events for 
**         CPU core settings.
*/         
/*!
**  @addtogroup Vectors_module Vectors module documentation
**  @{
*/         


#include "Cpu.h"

/*lint -save  -e950 Disable MISRA rule (1.1) checking. */
static void (* near const _vect[])(void) @0xFFB0 = { /* Interrupt vector table */
/*lint -restore Enable MISRA rule (1.1) checking. */
         Cpu_Interrupt,                /* Int.no. 39 Vnvm (at FFB0)                  Unassigned */
         Cpu_Interrupt,                /* Int.no. 38 VReserved38 (at FFB2)           Unassigned */
         Cpu_Interrupt,                /* Int.no. 37 Vkbi0 (at FFB4)                 Unassigned */
         Cpu_Interrupt,                /* Int.no. 36 Vtsi (at FFB6)                  Unassigned */
         Cpu_Interrupt,                /* Int.no. 35 Vrtc (at FFB8)                  Unassigned */
         Cpu_Interrupt,                /* Int.no. 34 Viic (at FFBA)                  Unassigned */
         Cpu_Interrupt,                /* Int.no. 33 VReserved33 (at FFBC)           Unassigned */
         Cpu_Interrupt,                /* Int.no. 32 Vspi0 (at FFBE)                 Unassigned */
         Cpu_Interrupt,                /* Int.no. 31 VReserved31 (at FFC0)           Unassigned */
         Cpu_Interrupt,                /* Int.no. 30 VReserved30 (at FFC2)           Unassigned */
         Cpu_Interrupt,                /* Int.no. 29 VReserved29 (at FFC4)           Unassigned */
         Cpu_Interrupt,                /* Int.no. 28 Vsci1tx (at FFC6)               Unassigned */
         Cpu_Interrupt,                /* Int.no. 27 Vsci1rx (at FFC8)               Unassigned */
         Cpu_Interrupt,                /* Int.no. 26 Vsci1err (at FFCA)              Unassigned */
         Cpu_Interrupt,                /* Int.no. 25 Vsci0tx (at FFCC)               Unassigned */
         Cpu_Interrupt,                /* Int.no. 24 Vsci0rx (at FFCE)               Unassigned */
         Cpu_Interrupt,                /* Int.no. 23 Vsci0err (at FFD0)              Unassigned */
         Cpu_Interrupt,                /* Int.no. 22 Vadc (at FFD2)                  Unassigned */
         Cpu_Interrupt,                /* Int.no. 21 Vacmp (at FFD4)                 Unassigned */
         Cpu_Interrupt,                /* Int.no. 20 VReserved20 (at FFD6)           Unassigned */
         Cpu_Interrupt,                /* Int.no. 19 Vmtim0 (at FFD8)                Unassigned */
         Cpu_Interrupt,                /* Int.no. 18 Vftm0ovf (at FFDA)              Unassigned */
         Cpu_Interrupt,                /* Int.no. 17 Vftm0ch1 (at FFDC)              Unassigned */
         Cpu_Interrupt,                /* Int.no. 16 Vftm0ch0 (at FFDE)              Unassigned */
         Cpu_Interrupt,                /* Int.no. 15 VReserved15 (at FFE0)           Unassigned */
         Cpu_Interrupt,                /* Int.no. 14 VReserved14 (at FFE2)           Unassigned */
         Cpu_Interrupt,                /* Int.no. 13 VReserved13 (at FFE4)           Unassigned */
         Cpu_Interrupt,                /* Int.no. 12 Vftm2ovf (at FFE6)              Unassigned */
         Cpu_Interrupt,                /* Int.no. 11 Vftm2ch5 (at FFE8)              Unassigned */
         Cpu_Interrupt,                /* Int.no. 10 Vftm2ch4 (at FFEA)              Unassigned */
         Cpu_Interrupt,                /* Int.no.  9 Vftm2ch3 (at FFEC)              Unassigned */
         Cpu_Interrupt,                /* Int.no.  8 Vftm2ch2 (at FFEE)              Unassigned */
         Cpu_Interrupt,                /* Int.no.  7 Vftm2ch1 (at FFF0)              Unassigned */
         Cpu_Interrupt,                /* Int.no.  6 Vftm2ch0 (at FFF2)              Unassigned */
         Cpu_Interrupt,                /* Int.no.  5 Vftm2flt (at FFF4)              Unassigned */
         Cpu_Interrupt,                /* Int.no.  4 Vclk (at FFF6)                  Unassigned */
         Cpu_Interrupt,                /* Int.no.  3 Vlvw (at FFF8)                  Unassigned */
         Cpu_Interrupt,                /* Int.no.  2 Virq_wdog (at FFFA)             Unassigned */
         Cpu_Interrupt,                /* Int.no.  1 Vswi (at FFFC)                  Unassigned */
         _EntryPoint                   /* Int.no.  0 Vreset (at FFFE)                Reset vector */
};
/*!
** @}
*/
/*
** ###################################################################
**
**     This file was created by Processor Expert 10.3 [05.08]
**     for the Freescale HCS08 series of microcontrollers.
**
** ###################################################################
*/

