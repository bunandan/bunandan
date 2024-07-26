#include<stdio.h>
#include<stdlib.h>
struct node
   {
    int data;
    struct node*next;
   };

void count_nodes(struct node*head)
   {
       int count=0;
       struct node*ptr=head;
       if(head!=NULL)
       {
           do
           {
               count++;
               ptr=ptr->next;
           }
           while(ptr!=head);
       }
       printf("the total number of nodes in a circular linked list= %d\t\n",count);
       printf("\n");
       printf("the data inside a circular linked list\n");
       for(int i=0;i<3;i++)
            {
                 printf("%d\t",head->data);
                 head=head->next;
             }
          while(head!=NULL)
           {

             printf("%d\t",head->data);
             head=head->next;
             break;
           }
             printf("\n");

}
  int main()
     {
        struct node *head,*first,*second,*third;
        head=(struct node*)malloc(sizeof(struct node));
        first=(struct node*)malloc(sizeof(struct node));
        second=(struct node*)malloc(sizeof(struct node));
        third=(struct node*)malloc(sizeof(struct node));
        struct node *ptr=(struct node*)malloc(sizeof(struct node));
        head->data=10;
        head->next=first;
        first->data=20;
        first->next=second;
        second->data=30;
        second->next=third;
        third->data=40;
        third->next=head;
        count_nodes(head);
     }
