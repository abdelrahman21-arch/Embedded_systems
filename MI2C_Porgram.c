#include"stdtypes.h"
#include"bitmath.h"
#include"MI2C_Private.h"
#include"MI2C_Interface.h"
void MI2C_voidInitialize(u32 ARG_u32CLKspeed, u8 ARG_u8SlaveAddr)
{
	
	SETBIT(TWCR,TWEN); 
    SETBIT(TWCR,TWEA); 	//Enable TWI 
	TWBR=10; // FREQ
	SETBIT(TWSR,TWPS0);  // clk prescaler /4 
	CLRBIT(TWSR,TWPS1);
   TWAR = (ARG_u8SlaveAddr <<1) | 1  ;  // set first bit to 1 
   
	

}

u8 readData(void)
{
	 u8 L_DataRead;
	 L_DataRead=TWDR;
	 while(CHECK_BIT(TWCR,TWINT)==0);
	 return L_DataRead;
	 
}
void MI2C_voidSendData(u8 ARG_u8data)
{
	TWDR=ARG_u8data;
	if(GET_STATUS ==  START_COND_STATS)
	{
		
		CLRBIT(TWCR.TWSTA);
		
		
	}
	else
	{
	
	}
	while(CHECK_BIT(TWCR,TWINT)==0);
	
	return;
}

void MI2C_SendData(u8 ARG_u8Address ,u8 ARG_data)
{
	 MI2c_voidStartCondition();
	 MI2C_voidSendData(ARG_u8Address<<1);
	  MI2C_voidSendData(ARG_data);
	 MI2c_voidStopCondition();
	 return;
	 
	
}
u8 MI2C_u8RecieveData(void)
{
	u8 L_RecievedData;
	 MI2c_voidStartCondition();
	 MI2C_voidSendData((ARG_u8Address<<1)|1);
	 MI2C_voidSendData(ARG_data);
	L_RecievedData=readData();
	 MI2c_voidStopCondition();
	 return;
	
	
	
	
}



void MI2c_voidStartCondition(void)
{
	SETBIT(TWCR,TWSTA);
	SETBIT(TWCR,TWINT);
	TWCR |= ((1<<TWINT)|(1<<TWSTA));
	while(CHECK_BIT(TWCR,TWINT)==0);
	
	return;
	
	
	
}
void MI2c_voidStopCondition(void)
{
	TWCR |= ((1<<TWINT)|(1<<TWSTA));
	SETBIT(TWCR,TWSTO);
	while(CHECK_BIT(TWCR,TWINT)==0);
	return;
	
	
}
