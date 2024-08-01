#include<stdio.h>
#include<stdlib.h>
#define size 20
struct dataitem
{
    int data;
    int key;
};
struct dataitem*hasharray[size];
struct dataitem*dummyitem;
struct dataitem*item;
int hashcode(int key)
{
    return key%size;

}
struct dataitem*search(int key)
{

int hashindex=hashcode(key);

while(hasharray[hashindex]!=NULL)
{
    if(hasharray[hashindex]->key==key)
    {
        return hasharray[hashindex];
    }
    ++hashindex;
    hashindex%=size;
}
return NULL;
};
struct dataitem*delete(struct dataitem*item)
{
    int key=item->key;
    int hashindex=hashcode(key);
    while(hasharray[hashindex]!=NULL)
    {
        if(hasharray[hashindex]->key==key)
        {
            struct dataitem*temp=hasharray[hashindex];
            hasharray[hashindex]=dummyitem;
            return temp;
        }
        ++hashindex;
        hashindex%=size;
    }
    return NULL;
};
void insert(int key,int data)
{
    struct dataitem*item=(struct dataitem*)malloc(sizeof(struct dataitem));
    item->data=data;
    item->key=key;
    int hashindex=hashcode(key);
    while(hasharray[hashindex]!=NULL&&hasharray[hashindex]->key!=-1)
    {
        ++hashindex;
        hashindex%=size;
    }
    hasharray[hashindex]=item;
}
void display()
{
    int i=0;
    for(i=0;i<size;i++)
    {
        if(hasharray[i]!=NULL)
        {
            printf("(%d,%d)\n",hasharray[i]->key,hasharray[i]->data);
        }
        else
        {
            printf("(~,~)\n");

        }
    }
    printf("\n");
}
int main()
{
    dummyitem=(struct dataitem*)malloc(sizeof(struct dataitem));
    dummyitem->data=-1;
    dummyitem->key=-1;
    insert(1,20);
    insert(2,70);
    insert(42,80);
    insert(4,25);
    insert(4,25);
    insert(12,44);
    insert(14,32);
    insert(17,11);
    insert(13,78);
    insert(37,97);
    /*insert();
    insert();
    insert();
    insert();*/
    display();
    item=search(37);
    if(item!=NULL)
    {
        printf("elements found : %d\n",item->data);

    }
    else
    {
    printf("element not found\n");
    }
    delete(item);
    display();
    item=search(37);
    if(item!=NULL)
    {
        printf("elements found : %d\n",item->data);
    }
    else
    {
        printf("element not found\n");
    }

}
