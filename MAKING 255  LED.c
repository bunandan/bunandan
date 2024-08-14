#include<reg51.h>
void delay(unsigned int k)
{
	unsigned int j;
	for(j=0;j<k;j++);
}
void main()
{
unsigned char a;
unsigned int i;
P2=0x00;
while(1)
{
a=0x01;
for(i=0;i<255;i++)
{
P2=a;
delay(10000);
a=a+0x01;
}
}
}
