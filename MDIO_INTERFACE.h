#ifndef  _MDIO_INTERFACE_H_
#define  _MDIO_INTERFACE
#define DIO_PORTA 0
#define DIO_PORTB 1
#define DIO_PORTC 2
#define DIO_PORTD 3
#define DIO_PORTDIR_A DIO_PINS_DIRECTION_A
#define DIO_PORTDIR_B DIO_PINS_DIRECTION_B
#define DIO_PORTDIR_C DIO_PINS_DIRECTION_C
#define DIO_PORTDIR_D DIO_PINS_DIRECTION_D
#define DIO_PIN0  0
#define DIO_PIN1  1
#define DIO_PIN2  2
#define DIO_PIN3  3
#define DIO_PIN4  4
#define DIO_PIN5  5
#define DIO_PIN6  6
#define DIO_PIN7  7
#define HIGH 1
#define LOW 0
#define MDIO_OUTPUT 10
#define MDIO_INPUT 30


void MDIO_voidInitilization(void);
void MDIO_SetPortValue (u8 ARG_u8PortNumber, u8 ARG_u8Value );
void MDIO_SetPinValue(u8  ARG_u8PortNumber, u8 ARG_u8Pin ,u8 ARG_u8Value);
u8 MDIO_GetPort(u8 ARG_u8PortNumber);
u8 MDIO_GetPin(u8 ARG_u8PortNumber,u8 ARG_u8PinValue);
#endif 


 
