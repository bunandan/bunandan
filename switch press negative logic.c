#include<reg51.h>
void delay(unsigned int t)
{
unsigned int i,j;
for(i=0;i<t;i++)
for(j=0;j<1275;j++);
}
sbit sw=P1^6;
void main()
{
while(1)
{
if(sw==0)
{
P2=0xff;
delay(100);
P2=0x00;
delay(100);
}
}
}
