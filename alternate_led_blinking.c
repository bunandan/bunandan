sfr P2=0XA0;
void delay(unsigned int t);
void main()
{
	P2=0x55;
	while(1)
	{
		P2=~P2;
		delay(100);
		P2=P2;
		delay(100);
	}
}
void delay(unsigned int t)
{
	unsigned int j,k;
	for( j=0;j<t;j++)
	for( k=0;k<922;k++);
}
	