ifndef  _MI2C_PRIVATE_H_
#define _MI2C_PRIVATE_H_ 
#define TWBR *((volatile u8*)0x20) 
#define TWDR *((volatile u8*)0x23)
#define TWAR *((volatile u8*)0x22)
#define TWGCE 0 
#define TWSR *((volatile u8*)0x21)
#define TWPS1 1 
#define TWPS0 0 
#define GET_STATUS  (TWSR >> 3)
#define TWCR *((volatile u8*)0x56
#define TWINT 7
#define TWEA 6
#define TWSTA 5
#define TWSTO 4 
#define TWWC  3
#define TWEN 2
#define TWIE 0 
#define START_COND_STATS 0x08
#define SLAW_ACK_STATUS 0x18
#define DATA_TRANSMIT_ACK_STATS  0X28
#define SLAR_ACK_STATUS 0x40
#define DATA_RECIEVED_ACK_STATS 0X50
void MI2c_voidStartCondition(void);
void MI2c_voidStopCondition(void);
void MI2c_voidSendData(u8 data);
u8 readData(void);

#endif 
