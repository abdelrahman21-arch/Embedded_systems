#include"stdtypes.h"
#include"bitmath.h"
#include"MDIO_INTERFACE.h"
#include"MDIO_CONFIG.h"
#include"MDIO_PRIVATE.h"





void MDIO_voidInitilization(void)
{
	GPIOA -> DDR=  DIO_PINS_DIRECTION_A ;
	GPIOB -> DDR= DIO_PINS_DIRECTION_B;
	GPIOC-> DDR = DIO_PINS_DIRECTION_C;
	GPIOD -> DDR= DIO_PINS_DIRECTION_D;
}


	
	
	
	
	
	

void MDIO_SetPortValue (u8 ARG_u8PortNumber, u8 ARG_u8Value )
{
	switch(ARG_u8PortNumber)
	{
		
		case DIO_PORTA : 
		      GPIOA -> PORT = ARG_u8Value;
			  break;
	    case DIO_PORTB : 
		      GPIOB -> PORT = ARG_u8Value;
			  break;
	    case DIO_PORTC : 
		      GPIOC -> PORT = ARG_u8Value;
			  break;
	     case DIO_PORTD : 
		      GPIOD -> PORT = ARG_u8Value;
			  break;
	}
	return;
	}
void MDIO_SetPinValue(u8  ARG_u8PortNumber, u8 ARG_u8Pin ,u8 ARG_u8Value)
{

	switch(ARG_u8PortNumber) 
	{
		case DIO_PORTA :
		                      if(ARG_u8Value == MDIO_OUTPUT)
		                      {
			                     SETBIT(GPIOA -> PORT ,ARG_u8Pin);
		                      }
		                      else 
		                      { CLRBIT(GPIOA -> PORT,ARG_u8Pin);}
		                     break;
		case DIO_PORTB :
		                      if(ARG_u8Value == MDIO_OUTPUT)
		                      {
			                    SETBIT(GPIOB -> PORT,ARG_u8Pin);
		                      }
		                      else 
		                      {
			                    CLRBIT(GPIOB -> PORT,ARG_u8Pin);
		                      }
		                    break;
		case DIO_PORTC :
		                  if(ARG_u8Value == MDIO_OUTPUT)
		                  {
			                  SETBIT(GPIOC -> PORT,ARG_u8Pin);
		                  }
		                  else 
		                  {
		                  	  CLRBIT(GPIOC -> PORT,ARG_u8Pin);
		                  }
		                    break;
		case DIO_PORTD :
		                  if(ARG_u8Value == MDIO_OUTPUT)
		                  {
			                  SETBIT(GPIOD -> PORT,ARG_u8Pin);
		                  }
		                  else 
		                  {
		                  	  CLRBIT(GPIOD -> PORT,ARG_u8Pin);
		                  }
		                    break;
		
		
	     
		
		
		
		
		
	}
	
} 
u8 MDIO_GetPort(u8 ARG_u8PortNumber)
{
	switch(ARG_u8PortNumber)
	{
		
		case DIO_PORTA : 
		      GPIOA -> PIN =  ARG_u8PortNumber;
			  break;
	    case DIO_PORTB : 
		      GPIOB -> PIN = ARG_u8PortNumber;
			  break;
	    case DIO_PORTC : 
		      GPIOC -> PIN =  ARG_u8PortNumber;
			  break;
	     case DIO_PORTD : 
		      GPIOD -> PIN =  ARG_u8PortNumber;
			  break;
	}
	return ARG_u8PortNumber;
	}
u8 MDIO_GetPin(u8 ARG_u8PortNumber,u8 ARG_u8PinValue)
{
	u8 L_U8_State;
	switch(ARG_u8PortNumber) 
	{
		
	case DIO_PORTA :
		L_U8_State=     CHECK_BIT(GPIOA -> PIN, ARG_u8PinValue);
		break;
	case DIO_PORTB :
		L_U8_State=    CHECK_BIT(GPIOB -> PIN, ARG_u8PinValue) ;
		break;
	case DIO_PORTC :
		L_U8_State=     CHECK_BIT(GPIOC -> PIN, ARG_u8PinValue) ;
		break;
	case DIO_PORTD :
		L_U8_State=  CHECK_BIT(GPIOD -> PIN, ARG_u8PinValue) ;
		break;
	}
	return L_U8_State;

}
