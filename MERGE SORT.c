#include<stdio.h>

void printarray(int *a,int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    printf("\n");
}
void merge(int a[],int mid,int low,int high)
{
    int i,j,k,b[2000];
    i=low;
    j=mid+1;
    k=low;
while(i<=mid&&j<=high)
{
    if(a[i]<a[j])
    {
    b[k]=a[i];
    i++;
    k++;
    }
else
{
    b[k]=a[j];
    j++;
    k++;
}
}
while(i<=mid)
{
    b[k]=a[i];
    k++;
    i++;
}
while(j<=high)
{
 b[k]=a[k];
 k++;
 j++;
}
for(int i=low;i<=high;i++)
{
    a[i]=b[i];
}
}
void mergesort(int a[],int low,int high)
{
    int mid;
    if(low<high)
    {
    mid=(low+high)/2;
    mergesort(a,low,mid);
    mergesort(a,mid+1,high);
    merge(a,mid,low,high);
    }
}
int main()
{
int a[]={9,1,4,14,4,15,6};
int n=sizeof(a)/sizeof(int);
printarray(a,n);
mergesort(a,0,6);
printarray(a,n);
return 0;
}
