#include<stdio.h>
#include<stdlib.h>
void disp(int a[],int size)
{
for(int i=0;i<size;i++)
{
printf("%d ",a[i]);
}
printf("\n");
}
void insert(int a[],int size,int element,int index)
{
for(int i=size-1;i>=index;i--)
{
a[i+1]=a[i];
}
a[index]=element;
}

int main()
{
int a[]={11,22,33,44,55,66};
int size=6,element=23,index=4;
disp(a,size);
insert(a,size,element,index);
size++;
disp(a,size);
}
