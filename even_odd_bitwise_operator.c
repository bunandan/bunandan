#include<stdio.h>
int main()
{
    int a;
    printf("enter the number\n");
    scanf("%d",&a);
    if(a&1)
    {
        printf("this number is a odd num\n");

    }
    else
    {
        printf("this is a even num\n");
    }
    return 0;
}
