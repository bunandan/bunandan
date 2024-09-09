/*#include<stdio.h>
int main()
{
    int rows;
    printf("enter the rows\n");
    scanf("%d",&rows);
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<rows-i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}*/
#include<stdio.h>
int main()
{
    int a=0,b=1,c,n;
    printf("enter the number\n");
    scanf("%d",&n);
    while(a<=n)
    {
        printf("%d\t",a);
        c=a+b;
        a=b;
        b=c;
    }
}
