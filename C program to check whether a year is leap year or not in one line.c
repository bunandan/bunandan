/*#include<stdio.h>
int main()
{
    int a;
    printf("enter the year\n");
    scanf("%d",&a);
    if((a%4==0)&&(a%100!=0)||(a%400==0))
    {
        printf("this is a leap year\n");
    }
    else
    {
        printf("this is not a leap year\n");
    }
    return 0;
}*/


#include<stdio.h>
int main()
{
    int a;
    for(int i=1;i<=4;i++)
    {
    printf("enter the year\n");
    scanf("%d",&a);
    if((a%4==0)&&(a%100!=0)||(a%400==0))
    {
        printf("%d is leap year\n",a);
    }
    else
        {
            printf("%d is not aleap year\n",a);
        }
}
}
