#include"stdtypes.h"
#include"bitmath.h"
#include"MGIE_Interface.h:"


void MGIE_voidEnableGI(void)
{
	SET_BIT(SREG,I_BIT);
}
void MGIE_voidDisableGI(void)
{
	CLEAR_BIT(SREG,I_BIT);
	
}