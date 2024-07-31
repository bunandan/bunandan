
#include<stdio.h>
#define max_val 9999
void insert(int ,int arr[],int *p_hsize);
void restoreup(int arr[],int loc);
void display(int arr[],int hsize);
int main()
{
    int arr[100];
    int hsize=0;
    int i,choice,num;
    arr[0]=max_val;
    while(1)
    {
        printf("1.insert\t2.delete\t3.display\t4.build heep\t5.exit\n");
        printf("enter your choice :");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            printf("enter the number to inserted :\n");
            scanf("%d",&num);
            insert(num,arr,&hsize);
            break;
        case 3:
            display(arr,hsize);
            break;
        }
    }
}
void insert(int num,int arr[],int *p_hsize)
{
    (*p_hsize)++;
    arr[*p_hsize]=num;
    restoreup(arr,*p_hsize);
}
void restoreup(int arr[],int i)
{
    int k=arr[i];
    int par=i/2;
    while(arr[par]<k)
    {
        arr[i]=arr[par];
        i=par;
        par=i/2;
    }
    arr[i]=k;
}
void display(int arr[],int hsize)
{
    int i;
    if(hsize==0)
    {
        printf("heap is empty\n");
        return;
    }
    for(int i=1;i<=hsize;i++)
        printf("%d\t",arr[i]);
    printf("\n");
    printf("num of elements = %d\n",hsize);
}
