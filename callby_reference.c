#include<stdio.h>
int main()
{

    int a=10,b=20;
    fun(&a,&b);
    printf("a=%d ,b=%d",a,b);
}
int fun(int *ptr1,int *ptr2)
{
    *ptr1=20;
    *ptr2=10;
}
