#include<reg51.h>
sbit IN1=P1^0;
sbit IN2=P1^1;
sbit EN1=P1^2;
sbit IN3=P1^3;
sbit IN4=P1^4;
sbit EN2=P1^5;
void forward();
void reverse();
void delay(unsigned int k)
{
	int i,j;
	for(i=0;i<k;i++)
	for(j=0;j<1257;j++);
}
void main()
{
	EN1=1;
	EN2=1;
	while(1)
	{
		forward();
		reverse();
	}
}
	void forward()
	{
		IN1=1;
		IN2=0;
		delay(10);
		IN3=1;
		IN4=0;
		delay(10);
	}
	void reverse()
	{
		IN1=1;
		IN2=0;
		delay(10);
		IN3=1;
		IN4=0;
		delay(10);
	}