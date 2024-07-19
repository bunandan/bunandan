#include<stdio.h>
int main()
{
    int n,arm=0,r;
    printf("enter the number\n");
    scanf("%d",&n);
    int a=n;
    while(n>0)
    {
        r=n%10;
        arm=(r*r*r)+arm;
        n=n/10;

    }
    if(a==arm)
    {
        printf(" %d  is a armstrong number\n",a);

    }
    else
    {
        printf("%d is not a armstrong number\n",a);
    }
    return 0;
}

