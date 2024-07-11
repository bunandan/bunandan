#include<stdio.h>
int main()
{
    int num,temp=0,i;
    printf("enter the number\n");
    scanf("%d",&num);
    for( i=1;i<=num/2;i++)
    {
        if(num%i==0)
        {
            temp=temp+i;
        }
    }
    if(temp==num)
    {
        printf("%d is a perfct number\n",num);
    }
    else
    {
        printf("%d is not a perfct number\n",num);
    }
    return 0;
}
/*#include<stdio.h>

int main () {
    int num, i, divSum;

    printf("Enter a number\n");
    scanf("%d", &num);

    for (divSum = 0, i = 1; i <= num/2; i++) {
        if (num % i == 0) {
            divSum += i;
        }
    }

    /* Check if Divisor sum is equal to input number */
   /* if (divSum == num)
        printf("%d is a Perfect Number\n", num);
    else
        printf("%d is Not a Perfect Number\n", num);

 return 0;
}*/
