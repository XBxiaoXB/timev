/***********************************************************************/
/*                                                                     */
/*  FILE        :intprg.c                                              */
/*  DATE        :Fri, Jun 17, 2022                                     */
/*  DESCRIPTION :Interrupt Program                                     */
/*  CPU TYPE    :H8/3694F                                              */
/*                                                                     */
/*  This file is generated by Renesas Project Generator (Ver.4.16).    */
/*                                                                     */
/***********************************************************************/
                  


#include <machine.h>
#pragma section IntPRG
// vector 1 Reserved

// vector 2 Reserved

// vector 3 Reserved

// vector 4 Reserved

// vector 5 Reserved

// vector 6 Reserved

// vector 7 NMI
__interrupt(vect=7) void INT_NMI(void) {/* sleep(); */}
// vector 8 TRAP #0
__interrupt(vect=8) void INT_TRAP0(void) {/* sleep(); */}
// vector 9 TRAP #1
__interrupt(vect=9) void INT_TRAP1(void) {/* sleep(); */}
// vector 10 TRAP #2
__interrupt(vect=10) void INT_TRAP2(void) {/* sleep(); */}
// vector 11 TRAP #3
__interrupt(vect=11) void INT_TRAP3(void) {/* sleep(); */}
// vector 12 Address break
__interrupt(vect=12) void INT_ABRK(void) {/* sleep(); */}
// vector 13 SLEEP
__interrupt(vect=13) void INT_SLEEP(void) {/* sleep(); */}
// vector 14 IRQ0
__interrupt(vect=14) void INT_IRQ0(void) {/* sleep(); */}
// vector 15 IRQ1
__interrupt(vect=15) void INT_IRQ1(void) {/* sleep(); */}
// vector 16 IRQ2
__interrupt(vect=16) void INT_IRQ2(void) {/* sleep(); */}
// vector 17 IRQ3
__interrupt(vect=17) void INT_IRQ3(void) {/* sleep(); */}
// vector 18 WKP
__interrupt(vect=18) void INT_WKP(void) {/* sleep(); */}
// vector 19 Timer A Overflow
__interrupt(vect=19) void INT_TimerA(void) {/* sleep(); */}
// vector 20 Reserved

// vector 21 Timer W
__interrupt(vect=21) void INT_TimerW(void) {/* sleep(); */}
// vector 22 Timer V
//__interrupt(vect=22) void INT_TimerV(void) {/* sleep(); */}
// vector 23 SCI3
__interrupt(vect=23) void INT_SCI3(void) {/* sleep(); */}
// vector 24 IIC2
__interrupt(vect=24) void INT_IIC2(void) {/* sleep(); */}
// vector 25 ADI
__interrupt(vect=25) void INT_ADI(void) {/* sleep(); */}
