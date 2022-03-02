
#ifndef MDIO_PRIVATE
#define MDIO_PRIVATE 

#define DIO_INPUT 0
#define DIO_OUTPUT 1

typedef struct
{
	u8 PIN;
	u8 DDR;
	u8 PORT;

}GPIO;

#define GPIOA 	((volatile GPIO *) 0x39)
#define GPIOB 	((volatile GPIO *) 0x36)
#define GPIOC 	((volatile GPIO *) 0x33)
#define GPIOD 	((volatile GPIO *) 0x30)
#define DIO_PINS_DIRECTION_A  CONCBIT(DIO_Pin7Direction_A,DIO_PiN6Direction_A,DIO_Pin5Direction_A ,DIO_Pin4Direction_A,DIO_Pin3Direction_A,DIO_Pin2Direction_A, DIO_Pin1Direction_A ,DIO_Pin0Direction_A)
#define DIO_PINS_DIRECTION_B  CONCBIT(DIO_Pin7Direction_B,DIO_Pin6Direction_B,DIO_Pin5Direction_B,DIO_Pin4Direction_B,DIO_Pin3Direction_B,DIO_Pin2Direction_B,DIO_Pin1Direction_B,DIO_Pin0Direction_B)
#define DIO_PINS_DIRECTION_C  CONCBIT(DIO_Pin7Direction_C,DIO_Pin6Direction_C,DIO_Pin5Direction_C,DIO_Pin4Direction_C,DIO_Pin3Direction_C,DIO_Pin2Direction_C,DIO_Pin1Direction_C,DIO_Pin0Direction_C)
#define DIO_PINS_DIRECTION_D CONCBIT(DIO_Pin7Direction_D,DIO_Pin6Direction_D,DIO_Pin5Direction_D,DIO_Pin4Direction_D,DIO_Pin3Direction_D,DIO_Pin2Direction_D,DIO_Pin1Direction_D,DIO_Pin0Direction_D)
#endif
