#include"stdtypes.h"
#include"bitmath.h"
#include"MEXTI_Interface.h"



void MEXTI_voidInitiliaze(void)
{
	SET_BIT(MCUCR,ISC01);
	CLEAR_BIT(MCUCR,ISC00);
	
	
}
void voidEnableInterrupt(u8 ARG_u8InterruptNumber)
{
	
	SET_BIT(GICR,ARG_u8InterruptNumber);
	
}
void voidDisableInterrupt(u8 ARG_u8InterruptNumber)
{
	CLEAR_BIT(GICR,ARG_u8InterruptNumber);
	
}