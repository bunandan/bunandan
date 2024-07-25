#include<stdio.h>
#include<stdlib.h>
struct node
   {
    int data;
    struct node*next;
   };

void traversal(struct node*head)
   {
       while(head!=NULL)
       {
           printf("%d\t",head->data);
           head=head->next;
       }
       printf("\n");
   }
  struct node*deleteend(struct node*head)
   {
       struct node*ptr=head;
       while(ptr->next->next!=NULL)
       {
           ptr=ptr->next;

       }
       ptr->next=NULL;
       return head;
   };
   int main()
     {
        struct node *head,*first,*second,*third;
        head=(struct node*)malloc(sizeof(struct node));
        first=(struct node*)malloc(sizeof(struct node));
        second=(struct node*)malloc(sizeof(struct node));
        third=(struct node*)malloc(sizeof(struct node));
        head->data=10;
        head->next=first;
        first->data=20;
        first->next=second;
        second->data=30;
        second->next=third;
        third->data=40;
        third->next=NULL;
        traversal(head);
        head=deleteend(head);
        traversal(head);
     }

