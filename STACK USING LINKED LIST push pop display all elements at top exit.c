
#include<stdio.h>
#include<stdlib.h>
void push();
void pop();
void display();
struct node
{
    int data;
    struct node*next;
};
struct node*head;

 void push()
{
    int data;
    struct node*ptr=(struct node*)malloc(sizeof(struct node));
    printf("enter the data value\n");
    scanf("%d",&data);

    if(head==NULL)
    {
        ptr->data=data;
        ptr->next=NULL;
        head=ptr;

    }
    else
    {
        ptr->data=data;
        ptr->next=head;
        head=ptr;
    }
}
void pop()
{
    int item;
    struct node*ptr
    ;

    if(head==NULL)
    {
        printf("underflow\n");
    }
    else
    {
        item=head->data;
        ptr=head;
        head=head->next;
        free(ptr);
    }
}
void display()
{
    int i;
    struct node*ptr=head;
    if(head==NULL)
        {
            printf("stack is empty\n");
        }
    else
        {
            while(ptr!=NULL)
            {
                printf("%d\n",ptr->data);
                ptr=ptr->next;
            }
        }
}
int main()
{
    int choice=0;
   while(choice!=4)
    {
    printf("enter the choice :\n1.push\t2.pop\t3.display\t4.exit(1)\t\n",choice);
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:

        push();
        break;
    case 2:
        pop();
        break;
    case 3:
        display();
        break;
    case 4:
        exit(1);
        break;
    default:
        printf("wrong choice\n",choice);
      }
    }
}
