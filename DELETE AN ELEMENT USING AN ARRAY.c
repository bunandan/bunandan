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
/*void insert(int a[],int size,int element,int index)
{
for(int i=size-1;i>=index;i--)
{
a[i+1]=a[i];
}
a[index]=element;
}*/
void deletion(int a[],int size,int index)
{
for(int i=index;i<size-1;i++)
{
a[i]=a[i+1];
}
}

int main()
{
int a[]={11,22,33,44,55,66};
int size=6,element=44,index=3;
disp(a,size);
/*insert(a,size,element,index);
size++;
disp(a,size);*/
deletion(a,size,index);
size--;
disp(a,size);
}
