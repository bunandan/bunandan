#include<stdio.h>
int Is(int a[],int size,int element)
{
    int low=0;
    int high=size-1;
    int mid;
    while(low<high)
    {

        mid=low+((high-low)/(a[high]-a[low]))*((element-a[low]));

        if(a[mid]==element)
            {
            return mid;
            }
        if(a[mid]<element)
    {

            low=mid+1;
    }
        else

        {
            high=mid-1;
        }
    }
return -1;

}
int main()
{
    int a[]={1,2,3,4,5,6,7,8,9,10};
    int element=1;
    int size=sizeof(a)/sizeof(int);
    int searchindex =Is(a,size,element);
    (searchindex==-1)?printf("element not found"):printf("element %d found at index %d",element,searchindex);

}

