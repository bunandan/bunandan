#include<stdio.h>
int main()
{
    int num,count=0,temp;
    printf("enter the digits\n");
    scanf("%d",&num);
    temp=num;
    while(temp!=0)
    {
        temp=temp/10;
        count++;
    }
    printf("number=%d,number of counts in a digit : %d\n",num,count);
    return 0;
}
