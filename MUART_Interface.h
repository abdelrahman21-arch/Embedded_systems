#ifndef _MUART_INTERFACE_H_
#define _MUART_INTERFACE_H_
void MUART_voidInit(void)
{
	CLRBIT(UCSRB,UCSZ2);
	SETBIT(UCSRC,UCZ1);
	SETBIT(UCSRC,UCSZ0);
	//ASYNC MODE
	CLRBIT(UCSRC,UMSEL);
	//DISABLE PARITY
	CLRBIT(UCSRC,UMP1);
	CLRBIT(UCSRC,UMP0);
	// one_stop bit
	CLRBIT(UCSRC,USBS);
	// CLK POLARITY 
	CLRBIT(UCSRC,UCPOL);
	// 9600 BAUD
	UBRRH=0;
	UBRRL=51;
	SETBIT(UCSRB,RXEN);
	SETBIT(UCSRB,TXEN);
	SETBIT(UCSRB,RXCIE);
	SETBIT(UCSRB,TXCIE);
}
void MUART_voidSendByte (u8 byte)
{
	while(CHECK_BIT(UCSRA,RXC) == 0 );
	return UDR = Byte; 
	
}
u8 MUART_u8RecieveByte(void)
{
	while(CHECK_BIT(UCSRA,RXC)==0)
	return UDR;
	
}
	
	
	
	
	
	
	
	
}











#endif