#include"stdtypes.h"
#include"MDIO_INTERFACE.h"
#include"MADC_Interface.h"


int main (void)
{
	CLRBIT(ADMUX,7);
	SETBIT(ADMUX,6);
	SETBIT(ADMUX,5);
	SETBIT(ADCSRA,7);
	while(1)
	{
		SETBIT(ADCSRA,6);
		while(0==CHEC_BIT(ADCSRA,4));
   MDIO_SetPortValue(DIO_PORTC,ADCH);
   SETBIT(ADCSRA,4);

	}
	return 0; 
	
	
}