#include<stdio.h>
int main()
{
    int n,rev=0,pal,r;
    printf("enter the number\n");
    scanf("%d",&n);
    pal=n;
    while(n!=0)
    {
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    if(pal==rev)
    {
        printf("%d is the palindrome number\n",pal);

    }
    else

    {
        printf("%d is not a palindrome\n",pal);
    }
}
