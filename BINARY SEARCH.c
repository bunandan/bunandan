#include<stdio.h>
int main()
{
    int a[]={10,20,30,40,50,60};
    int size=sizeof(a)/sizeof(int);
    int element=60;
    int searchindex=bs(a,size,element);
    (searchindex==-1)?printf("element not found"):printf("element %d found at index %d",element,searchindex);

}
int bs(int a[],int size,int element)
{
    int low=0;
    int high=size-1;
    int mid;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(a[mid]==element)
            return mid;
        if(a[mid]<element)
            low=mid+1;
        else
        {
          high=mid-1;
        }
    }
return -1;
}
