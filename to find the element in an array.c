#include<stdio.h>
int main()
{
int a[]={100,200,300,400,500,600};
int size=5;
int element =300;
for(int i=0;i<size;i++)
{
if(a[i]==element)
{
printf("element %d is found\n",element,i);
break;
}
if(a[i]==a[size-1])
{
printf("element not found\n");
}
}
}
