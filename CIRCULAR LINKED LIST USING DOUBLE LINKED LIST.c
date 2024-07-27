
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
    struct node*p=head;
     printf("data in forward direction\n");
    for( int i=0;i<3;i++)
    {
        printf("%d->\t",p->data);
       p= p->next;
    }
    printf("\n");
}
void revtraversal(struct node*second)
{
     printf("data in reverse direction\n");
    for(int i=0;i<3;i++)
    {
        printf("%d<-\t",second->data);
        second=second->prev;
    }
}
int main()
{
    struct node*head,*first,*second;
    head=(struct node*)malloc(sizeof(struct node));
    first=(struct node*)malloc(sizeof(struct node));
    second=(struct node*)malloc(sizeof(struct node));
    head->data=10;
    head->next=first;
    head->prev=second;
    first->data=20;
    first->next=second;
    first->prev=head;
    second->data=30;
    second->next=head;
    second->prev=first;
    fortraversal(head);
    revtraversal(second);
}


