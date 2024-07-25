#include<stdio.h>                                                                                                                                 AFTER INSERTING THE NODE PTR
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
  struct node*insertmid(struct node*head,struct node*prev,int data)
   {
       struct node*ptr=(struct node*)malloc(sizeof(struct node));
       ptr->data=data;
       ptr->next=prev->next;
       prev->next=ptr;

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
        //traversal(head);
        //head=insertfirst(head,5);
        traversal(head);
        head=insertmid(head,second,5);
        traversal(head);
}
