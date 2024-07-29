#include<stdio.h>
#include<stdlib.h>
#define max 3
int queue_arr[max];
int rear=-1;
int front=-1;
int isfull()
{
    if(rear==max-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int isempty()
{
    if(front==-1||front==rear+1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int peek()
{
    if(isempty())
    {
        printf("queue is empty/underflow\n");
        exit(1);
    }
    return queue_arr[front];
}
int del()
{
    int item;
    if(isempty())
    {
     printf("queue is underflow\n");
     exit(1);
    }
    item=queue_arr[front];
    front=front+1;
    return item;
}
void display()
{
    int i;
    if(isempty())
    {
        printf("queue is empty\n");
        return;
    }
    printf("queue is :\n\n");
    for(i=front;i<=rear;i++)
    {
        printf("%d",queue_arr[i]);
        printf("\n\n");
    }
}
void insert(int item)
{
    if(isfull())
    {
        printf("queue overflow\n");
        return;
    }
    if(front==-1)
    {
        front=0;

    }
    rear=rear+1;
    queue_arr[rear]=item;
}
int main()
{
    int choice,item;
    while(1)
    {
        printf("1.insert\t2.delete\t3.front\t4.display\t5.exit(1)\n");
        printf("enter the chioce\n");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            printf("input the element for adding in queue :\n");
            scanf("%d",&item);
            insert(item);
            break;
        case 2:
            item=del();
            printf("deleted item is %d\n",item);
            break;
        case 3:
            printf("elements at the front is %d\n",peek());
            break;
        case 4:
            display();
            break;
        case 5:
            exit(1);
            break;
        default:
            printf("enter the wrong choice\n");
        }
    }
}

