
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
#define DIO_PINS_DIRECTION_B  CONCBIT(DIO_Pin7D6irection_B,DIO_Pin6D5irection_B,DIO_Pin5D4irection_B,DIO_Pin4D3irection_B,DIO_Pin3D2irection_B,DIO_Pin2D1irection_B,DIO_Pin1D0irection_B,DIO_Pin0Direction_B)
#define DIO_PINS_DIRECTION_C  CONCBIT(DIO_Pin7D6irection_C,DIO_Pin6D5irection_C,DIO_Pin5D4irection_C,DIO_Pin4D3irection_C,DIO_Pin3D2irection_C,DIO_Pin2D1irection_C,DIO_Pin1D0irection_C,DIO_Pin0Direction_C)
#define DIO_PINS_DIRECTION_D CONCBIT(DIO_Pin7D6irection_D,DIO_Pin6D5irection_D,DIO_Pin5D4irection_D,DIO_Pin4D3irection_D,DIO_Pin3D2irection_D,DIO_Pin2D1irection_D,DIO_Pin1D0irection_D,DIO_Pin0Direction_D)
#endif MDIO_PRIVATE