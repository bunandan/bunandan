#include<reg51.h>
void main()
{
	while(1)
	{
		unsigned int j;
		P1=0X00;
		for(j=0;j<600;j++);
		P1=0xff;
		for(j=0;j<600;j++);
	}
}
