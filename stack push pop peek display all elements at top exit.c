#include<stdio.h>
#include<stdlib.h>
#define MAX 5
int stack_arr[MAX];
int top=-1;
void push(int item);
int pop();
int peek();
int isempty();
int isfull();
void display();
int main()
{
    int choice,item;
    while(1)
    {
        printf("1.push\t2.pop\t3.display the top elements\t4.display all stack elements\t5.exit(1)\n");
        printf("enter the choice :\n");
        scanf("%d",&choice);
        switch(choice)
              {
              case 1:
                printf("enter the item to be pushed :\n");
                scanf("%d",&item);
                push(item);
                break;
                case 2:
                item=pop();
                printf("popped item is: %d\n",item);
                break;
                case 3:
                    printf("item at the top is :%d\n",peek());
                    break;
                case 4:
                    display();
                    break;
                case 5:
                    exit(1);
                default:
                    printf("wrong chioice\n");
              }
    }

}
void push(int item)
    {
        if(isfull())
         {
    printf("stack overflow\n");
    return;
          }
top=top+1;
stack_arr[top]=item;
    }


int pop()
{
    int item;
    if(isempty())
    {
        printf("stack underflow\n");
        exit(1);
    }
    item=stack_arr[top];
    top=top-1;
    return item;
}
int peek()
{
    if(isempty())
    {
        printf("stack underflow\n");
        exit(1);
    }
    return stack_arr[top];
}
int isempty()
{
    if(top==-1)
    {
        return 1;
    }
        else
        {
            return 0;
        }
}
int isfull()
{
    if(top==MAX-1)
        return 1;
    else
        return 0;
}
void display()
{
    int i;
    if(isempty())
    {
        printf("stack is empty\n");
        return;
    }
    printf("stack elements ;\n\n");
    for(int i=top;i>=0;i--)
    {
        printf("%d\n",stack_arr[i]);
        printf("\n");
    }
}


