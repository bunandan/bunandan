
#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node*prev;
    struct node*next;
};
void fortraversal(struct node*head)
{
    printf("data in forward direction :\n");
    while(head!=NULL)
    {
    printf("%d\t->\t",head->data);
    head=head->next;
    }
    printf("\n");
}
void revtraversal(struct node*third)
{
   printf("data in reverse direction :\n");
    while(third!=NULL)
    {
        printf("%d\t<-\t",third->data);
        third=third->prev;
    }
    printf("\n");
}
void revtraversal1(struct node*head)
{
    struct node*p=head;
    printf("data in reverse direction :\n");
    while(p->next!=NULL)
    p=p->next;

   while(p!=NULL)
   {
       printf("%d\t<-\t",p->data);
       p=p->prev;
   }

}
struct node*insertatfront(struct node*head,int data)
{
    struct  node*ptr=(struct node*)malloc(sizeof(struct node*));
    ptr->data=data;
    ptr->next=head;
    ptr->prev=NULL;
    head->prev=ptr;
    return ptr;
};
struct node*insertatend(struct node*head,int data)
{
    struct node *ptr=(struct node*)malloc(sizeof(struct node));
    struct node*p=head;
    while(p->next!=NULL)
    p=p->next;
    ptr->data=data;
    ptr->next=NULL;
    ptr->prev=p;
    p->next=ptr;
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
    head->prev=NULL;
    first->data=20;
    first->next=second;
    first->prev=head;
    second->data=30;
    second->next=third;
    second->prev=first;
    third->data=40;
    third->next=NULL;
    third->prev=second;
    fortraversal(head);
    revtraversal(third);
    revtraversal1(head);
    printf("\n");
    printf("======================================================================================================\n");
    printf("\ninsert node at front :\n");
    printf("\n");
    head=insertatfront(head,33);
    fortraversal(head);
    revtraversal(third);
    revtraversal1(head);
    printf("\n");
    printf("======================================================================================================\n");
    printf("\ninsert node at end :\n");
    head=insertatend(head,99);
    printf("\n");
    fortraversal(head);
    revtraversal(third);
    revtraversal1(head);
    printf("\n====================================================================================================\n");
}
