#include<reg51.h>
#define data P2
sbit rs=P3^5;
sbit rw=P3^7;
sbit en=P3^4;
void delay(unsigned int x );
void lcd_command(char c);
void lcd_dat(char d);
void lcd_init();
    int main()
  {
      int i;
      lcd_init();
	
     while(1)
	    {
        P1=0xfe;
        i=P1;
        switch(i)
           {
             case 0x7e:
             lcd_dat('7');
             delay(50);
             break;
             case 0xbe:
             lcd_dat('8');
             delay(50);
             case 0xde:
             lcd_dat('9');
             delay(50);
             break;
             case 0xee:
             lcd_dat('/');
             delay(50);
             break;
           }
         P1=0xfd;
         i=P1;
           switch(i)
               {
                 case 0x7d:
                 lcd_dat('4');
                 delay(50);
                 break;
                 case 0xbd:
                 lcd_dat('5');
                 delay(50);
                 break;
                 case 0xdd:
                 lcd_dat('6');
                 delay(50);
                 break;
                 case 0xed:
                 lcd_dat('*');
                 delay(50);
                 break;
             	}
P1=0xfb;
	i=P1;
	               switch(i)
	                 {
                      case 0x7b:
                      lcd_dat('1');
                      delay(50);
                      break;
                      case 0xbb:
                      lcd_dat('2');
                      delay(50);
                      break;
                      case 0xeb:
                      lcd_dat('3');
                      delay(50);
                      break;	
                      case 0xdb:
                      lcd_dat('-');
                      delay(50);
                      break;
                   }
P1=0xf7;
i=P1;
                     switch(i)
                       {
	                       case 0x77:
                         lcd_dat('~');
                         delay(50);
                         break;
                       	 case 0xb7:
                         lcd_dat('0');
                         delay(50);
                         break;
	                       case 0xd7:
                         lcd_dat('=');
                         delay(50);
                         break;
                         case 0xe7:
                         lcd_dat('+');
                         delay(50);
                         break;
                       }
              }
       }
	void delay(unsigned int x)
	{
		int j,i;
		for(j=0;j<x;j++)
		for(i=0;i<1275;i++);
	}
	void lcd_command(unsigned char c)
	{
     data=c;
     rs=0;
     rw=0;
     en=1;
     delay(10);
     en=0;
     delay(10);
	}
  void lcd_dat(unsigned char d)
  {
		
      data=d;
      rs=1;
      rw=0;
      en=1;
      delay(10);
	    en=0;
	    delay(10);
  }	
	void lcd_init()
	{
		lcd_command(0x38);
	  lcd_command(0x0e);
	  lcd_command(0x80);
	 // lcd_command(0xc0);
	  lcd_command(0x06);
		lcd_command(0x01);
	}