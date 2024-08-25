/*#include <stdio.h>

int main()
{
    int N, nFactorial, counter;
    printf("Enter a number for factorial calculation \n");
    scanf("%d",&N);
    for(counter=1,nFactorial=1; counter <= N; counter++)
        {
        nFactorial = nFactorial * counter;
        }
    printf("Factorial of %d is %d", N, nFactorial);

    return 0;
}*/

/*#include<stdio.h>
int main()
{
    int a,b,c,n;
    printf("enter the number\n");
    scanf("%d",&n);
    for(a=1,b=1;a<=n;a++)
    {
        b=b*a;
    }
    printf("the factorial of %d  is %d",n,b);
}*/
/*#include<stdio.h>
int main()
{
    int n,factorial,count;
    printf("enter the number\n ");
    scanf("%d",&n);
    for(factorial=1,count=1;count<=n;count++)
    {
        factorial=factorial*count;
    }
    printf("the factorial of %d is %d",n,factorial);
    return 0;
}*/
#include<stdio.h>
int main()
{
    int n,factorial,count;
    printf("enter the number\n");
    scanf("%d",&n);
    for(factorial=1,count=1;count<=n;count++)
    {
        factorial=factorial*count;
    }
    printf("the factorial of %d is %d",n,factorial);
    return 0;
}
