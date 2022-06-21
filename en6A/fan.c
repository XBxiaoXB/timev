#include "iodefine.h"
#include "fan.h"
#include "ad.h"
//#include "machine.h"
#include "led.h"

const unsigned int g_fanPeriod = 0xff;
unsigned int g_fanLevel = 0xAA;
unsigned int i = 0;

void initFan(void)
{
	TV.TCRV0.BIT.CMIEA = 0;
	//TV.TCRV0.BIT.CMIEB = 0;
	
	TV.TCRV0.BIT.CCLR = 1;
	TV.TCRV0.BIT.CKS = 3;//neibushizhong
	TV.TCRV1.BIT.ICKS = 1;
	TV.TCSRV.BIT.OS = 1;
	TV.TCSRV.BIT.CMFA = 0;
			
	TV.TCORA = g_fanPeriod;
	TV.TCORB = g_fanLevel;
	
	TV.TCRV0.BIT.CMIEA = 1;
	//TV.TCRV0.BIT.CMIEB = 1;

}

void setFanLevel(unsigned int level)
{
	if(level<g_fanPeriod){
		g_fanLevel=level;
	}
}

unsigned int getFanLevel(void)
{
	return g_fanLevel;
}

#pragma section IntPRG
__interrupt(vect=22) void INT_TimerV(void) 
{
	i++;
	
	if(TV.TCSRV.BIT.CMFA == 1){
		TV.TCSRV.BIT.CMFA = 0;

         LED1_ON();
		 	
		TV.TCORA=g_fanPeriod;
		TV.TCORB=g_fanLevel;
	}
	if(TV.TCSRV.BIT.CMFB == 1){
		TV.TCSRV.BIT.CMFB = 0;
		
         LED1_OFF();
		
		TV.TCORA=g_fanPeriod;
		TV.TCORB=g_fanLevel;
	}
}
	
