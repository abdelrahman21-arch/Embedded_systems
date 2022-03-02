#define SETBIT(x,y) (x)|=(1<<(y))
#define CLRBIT(x,y) (x)&=(~(1<<(y)))
#define togglebit(x,y) (x)^=(1<<(y))
#define setfirstnibble(x) |= (x)|15
#define clearfirstnibble(x) (x) &= (~(15))
#define CHECK_BIT(x, y) (x & (1UL << y) )
#define setlastnibble(x) (x)|=240
#define clearlastnibble(x) (x)&= ~(240)
#define togglefirstnibble(x) (x)^ = 15
#define togglelastnibble(x) (x)^= 240
#define CONCBIT(A7,A6,A5,A4,A3,A2,A1,A0)  CONCHELPER(A7,A6,A5,A4,A3,A2,A1,A0)
#define CONCHELPER(A7,A6,A5,A4,A3,A2,A1,A0)		0b##A7##A6##A5##A4##A3##A2##A1##A0

