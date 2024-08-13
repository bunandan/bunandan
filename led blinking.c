#include<reg51.h>
void main()
{
	while(1)
     {
	unsigned int j;
	P1=0x00;
	for(j=0;j<6;j++);
	P1=0xff;
	for(j=0;j<6;j++);
     }
}