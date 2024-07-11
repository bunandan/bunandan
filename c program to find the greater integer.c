#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter the integer\n");
    scanf("%d %d %d",&a,&b,&c);// 14 4 20, 30 20 10
    if(a>b&&b>c)
    {
        printf("%d is greater\n",a);
    }
    else if(b>c)
    {
        printf("%d is greater\n",b);
    }
    else
    {
        printf("%d is greater\n",c);
    }
    return 0;
}
