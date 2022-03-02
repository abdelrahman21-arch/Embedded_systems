#include"stdtypes.h"
#include"bitmath.h"
#include"MWatchDog_Interface.h"
#include"MWatchDog_Private.h"

void Mwatch_voidEnable(void)
{
	SETBIT(WDTCR,WDTOE);
	SETBIT(WDTCR,WDE);
	
	
}
void Mwatch_voidDisable(void)
{
	WDTCR=0b00011000;
	CLRBIT(WDTCR.WDE);
	
}