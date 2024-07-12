#include<stdio.h>
int main()
{
    int a=0,b=1,n,c;
    n=10;
    while(a<=n)
    {
        printf("%d\t",a);
        c=a+b;
        a=b;
        b=c;
    }
}
