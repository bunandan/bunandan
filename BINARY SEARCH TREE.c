#include<stdio.h>
#include<malloc.h>
struct node
{
    int data;
    struct node*left;
    struct node*right;
};
struct node*creatnode(int data)
{
struct node*n;
n=(struct node*)malloc(sizeof(struct node));
n->data=data;
n->left=NULL;
n->right=NULL;
return n;
}

void preorder(struct node*root)
{
    if(root!=NULL)
    {
        printf("%d ->\t",root->data);
        preorder(root->left);
        preorder(root->right);
    }
}
void postorder(struct node*root)
{
    if(root!=NULL)
    {
        postorder(root->left);
        postorder(root->right);
        printf("%d ->\t",root->data);
    }
}
void inorder(struct node*root)
{
    if(root!=NULL)
    {
        inorder(root->left);
        printf("%d ->\t",root->data);
        inorder(root->right);
    }
}
int main()
{
    struct node*p=creatnode(27);
    struct node*p1=creatnode(14);
    struct node*p2=creatnode(10);
    struct node*p3=creatnode(19);
    struct node*p4=creatnode(35);
    struct node*p5=creatnode(31);
    struct node*p6=creatnode(42);
    p->left=p1;
    p->right=p4;
    p1->left=p2;
    p1->right=p3;
    p4->left=p5;
    p4->right=p6;
    printf("preorder :\n");
    preorder(p);
    printf("\n");
    printf("\n");
    printf("post order :\n");
    postorder(p);
    printf("\n");
    printf("\n");
    printf("inorder :\n");
    inorder(p);
    return 0;
}

