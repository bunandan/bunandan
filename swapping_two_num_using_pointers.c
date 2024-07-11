#include<stdio.h>
int main()
{
    int a=10,b=20;
    int  *ptr1,*ptr2,*temp;
    printf("before swapping\n");
    printf("a=%d b=%d\n",a,b);
    ptr1=&a;
    ptr2=&b;
    temp=*ptr1;
    *ptr1=*ptr2;
    *ptr2=temp;
    printf("after the swappimg\n");
    printf("a=%d, b=%d",a,b);
}
