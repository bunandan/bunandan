
#include<stdio.h>
int main()
{
    int a[]={5,4,3,2,1};
    int  size=sizeof(a)/sizeof(int);
    for(int i=0;i<size-1;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            if(a[j]<a[i])
            {
                int temp=a[j];
                a[j]=a[i];
                a[i]=temp;

            }
        }
    }
    for(int i=0;i<size;i++)
    {
        printf("%d\t",a[i]);
    }
}

