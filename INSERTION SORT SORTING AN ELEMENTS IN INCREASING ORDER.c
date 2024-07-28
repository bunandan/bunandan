#include<stdio.h>
int main()
{
    int a[]={5,6,78,45,34,67};
    int size=sizeof(a)/sizeof(int);
    for(int i=1;i<size;i++)
    {
        int j=i-1;
        int value=a[i];
        while(j>=0&&a[j]>value) // while(j>=0&&a[i]<value) // for decreasing order.
        {
            a[j+1]=a[j];
            j--;
        }
            a[j+1]=value;


        }
        for(int i=0;i<size;i++)
        {
            printf("%d\t",a[i]);
        }
    }


