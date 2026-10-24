#include<p18f4520.h>
void main()
{
TRISB=0X00; //led 0/p direction
TRISC=0X01; //rc0 as i/p direction
PORTB=0X00;
while(1)
{
if((PORTC&0X01)==0)
{
PORTB=0XFF;
}
else
{
PORTB=0X00;
}
}
}