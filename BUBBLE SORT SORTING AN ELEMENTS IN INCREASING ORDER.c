
#include<stdio.h>
//#include<stdlib.h>
int main()
{
int a[]={35,87,54,21,43,96,5,25,74};
int size=sizeof(a)/sizeof(int);
int c,j,i;
for(c=1;c<size;c++)
{
    for(j=0;j<size-c;j++)
    {
        if(a[j]>a[j+1])  //if(a[j]<a[j+1]// for decreasing order.
        {
            int temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
        }
    }
}
printf("Array elements are \n ");
for(i=0;i<size;i++)
{
    printf("%d ",a[i]);
}
}
