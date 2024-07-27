#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node*next;
    struct node*prev;
};
void fortraversal(struct node*head)
{
    while(head!=NULL)
    {
        printf("%d\t",head->data);
        head=head->next;
    }
            printf("\n");
}
void revtraversal(struct node*head)
{
    struct node*ptr=head;
    while(ptr->next!=NULL)
    {
        ptr=ptr->next;
    }
    while(ptr!=NULL)
    {
        printf("%d\t",ptr->data);
        ptr=ptr->prev;

    }
    printf("\n");
}
struct node*insertindex(struct node*head,int index,int data)
{
    struct node*ptr=(struct node*)malloc(sizeof(struct node));
    struct node*p=head,*p1;
    for(int i=0;i!=index-1;i++)
    {
      p=p->next;
    }
    p1=p->next;
    ptr->data=data;
    ptr->next=p->next;
    ptr->prev=p;
    p->next=ptr;
    p1->prev=ptr;
    return head;

};
int main()
{
    struct node*head,*first,*second,*third;
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
    revtraversal(head);
    head=insertindex(head,1,75);
    fortraversal(head);
    revtraversal(head);
}
