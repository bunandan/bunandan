/*#include<stdio.h>
struct {
unsigned char k :8;
unsigned char l :1;
unsigned char m :1;
}flags;
int main()
{
    printf("%d",sizeof(flags));
}*/
/*#include<stdio.h>
int main()
{
    printf("%d",sizeof(int));
    return 0;
}*/

/*#include<stdio.h>
int main()
{
    int a,b;
    printf("enter the number\n");
    scanf("%d",&a);
    if(a%2==0)
    {
        printf("%d is a prime is not a prime number\n",a);

    }
    else
    {
        printf("%d is a prime number\n",a);
    }
    return 0;
}*/

/*#include <stdio.h>

int main()
{
    int limit,n,i,flag;//assume n is prime
    printf("Enter the Limit:");
    scanf("%d",&limit);
    for(n=2;n<=limit;n++)
    {
        flag=0;
    for(i=2;i<=n/2;i++)
      {
          if(n%i==0)
            {
                flag=1;
                break;
            }
      }
      if(flag==0)
       printf("%d ",n);

    }

    return 0;
}*/
#include <stdio.h>
#include<math.h>
int main()
{
    int a,n,sum=0,d=0,x;
    printf("Enter number:");
    scanf("%d",&n);
    x=n;
    while(n%10)
      {
          n=n/10;
          d++;
      }
      n=x;
     while(n)
       {
           a=n%10;
           sum=sum+pow(a,d);
           n=n/10;
       }
       printf("sum=%d ",sum);
       if(x==sum)
       printf("armstrong");
       else
       printf("not aremstrong");
    return 0;
}
