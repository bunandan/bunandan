#include<stdio.h>
int main()
{
    int a,b;
    printf("enter the number\n");
    scanf("%d",&a);
    b=(a%2==1)?0:1;
    if(b==1)
    {
        printf("%d is even number\n",a);
    }
    else
    {
        printf("%d is odd number\n",a);
    }
    return 0;
}
