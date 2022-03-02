#ifndef _MEXTI_INTERFACE_H_
#define _MEXTI_INTERFACE_H_
#define MEXTI_INT0 0 
#define MEXTI_INT1 1 
#define MEXTI_INT2 2 
void MEXTI_voidInitiliaze(void);
void voidEnableInterrupt(u8 ARG_u8InterruptNumber);
void voidDisableInterrupt(u8 ARG_u8InterruptNumber);
#endif