#include "fan.h"
#include "iodefine.h"
#include "ad.h"
#include "machine.h"

const unsigned int g_fanPeriod=0xff;
unsigned int g_fanLevel=0x00;

void initFan(void)
{
    TV.TCRV0.BIT.CMIEA = 0;
	

	TV.TCRV0.BIT.CCLR = 1;
	TV.TCRV0.BIT.CKS = 1;//neibushizhong
	TV.TCRV1.BIT.ICKS = 0;
	TV.TCSRV.BIT.OS = 1;
	TV.TCSRV.BIT.CMFA = 0;
			
	TV.TCORA=g_fanPeriod;
	TV.TCORB=g_fanLevel;
	
    TV.TCRV0.BIT.CMIEA = 1;

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
	if(TV.TCSRV.BIT.CMFA == 1){
    	TV.TCSRV.BIT.CMFA = 0;
 		
		TV.TCORA=g_fanPeriod;
		TV.TCORB=g_fanLevel;
	}
}
	
