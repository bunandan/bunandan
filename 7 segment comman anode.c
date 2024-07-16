#include<reg51.h>
void delay(int k)
{
	int i,j;
	for(i=0;i<k;i++)
	for(j=0;j<1275;j++);
}
void main()
{
	unsigned char i;
	unsigned char arr[11]={0x40,0x79,0x24,0x30,0x19,0x12,0x02,0xf8,0x00};
	P2=0x00;
	while(1)
	{
		for(i=0;i<10;i++)
		{
			P2=arr[i];
			delay(100);
		}
	}
}
