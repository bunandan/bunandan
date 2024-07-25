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
      struct node*ptr;
      ptr=head;

      while(ptr!=NULL)
       {
            count++;
            ptr=ptr->next;
       }

      printf("the total number of nodes in a single linked list = %d \n",count);

      printf("the data inside single linked list are : \n");

      while(head!=NULL)
       {

             printf("%d\n",head->data);
             head=head->next;
       }
             printf("\n");

       if(head!=NULL)
            {
              printf("linked list is empty\n");
            }

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
        third->next=NULL;
        count_nodes(head);
     }

