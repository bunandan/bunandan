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
    while(head!=NULL)
    {
    printf("%d ",head->data);
    head=head->next;
    }
    printf("\n");
}
void revtraversal(struct node*third)
{
    while(third!=NULL)
    {
        printf("%d ",third->data);
        third=third->prev;
    }
}
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
}

