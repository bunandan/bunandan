#include<reg51.h>
void delay(unsigned int k);
sbit relay=P2^0;
void main()
{
	unsigned int i;
	while(1)
	{
		relay=1;
		delay(1000);
		relay=0;
		delay(1000);
	}
}
	void delay(int n)
	{
		int i,j;
		for(i=0;i<n;i++)
		for(j=0;j<1275;j++);
	}