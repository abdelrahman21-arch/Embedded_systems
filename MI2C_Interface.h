
#infdef _MI2C_Interface_H_
#define _MI2C_Interface_H_

void MI2C_voidInitialize(u32 ARG_u32CLKspeed, u8 ARG_u8SlaveAddr);
void MI2C_SendData(u8 ARG_u8Address ,u8 ARG_data)


u8 MI2C_u8RecieveData(void);










#endif