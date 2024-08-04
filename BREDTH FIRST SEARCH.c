#include<stdio.h>
#include<stdlib.h>
#define max 100
#define initial 1
#define waiting 2
#define visited 3
int n;
int adj[max][max];
int state[max];
void creategraph();
void bftraversal();
void  bfs(int v);
int queue[max],front=-1,rear=-1;
void insertqueue(int vertex);
int deletequeue();
int isemptyqueue();


void bftraversal()
{
    int v;
    for(v=0;v<n;v++)

        state[v]=initial;
        printf("enter start vertex for bfs\n");
        scanf("%d",&v);
        bfs(v);

}
void bfs(int v)
{
    int i;
    insertqueue(v);
    state[v]=waiting;
    while(!isemptyqueue())
          {
    v=deletequeue();
    printf("%d ",v);
    state[v]=visited;
    for(i=0;i<n;i++)
    {
        if(adj[v][i]==1&&state[i]==initial)
        {
            insertqueue(i);
            state[i]=waiting;
        }
    }
}
       printf("\n");
}
void insertqueue(int vertex)
{
    if(rear==max-1)

    printf("queue overflow\n");

    else
    {
        if(front==-1)

            front=0;
            rear=rear+1;
            queue[rear]=vertex;

    }
}
int isemptyqueue()
{
    if(front==-1||front>rear)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int deletequeue()
{
    int deleteitem;
    if(front==-1||front>rear)
    {
        printf("queue underflow\n");
        exit(1);
    }
    deleteitem=queue[front];
    front=front+1;
    return deleteitem;
}
void creategraph()
{
    int count,maxedge,origin,destin;
    printf("enter number of vertices :");
    scanf("%d",&n);
    maxedge=n*(n-1)/2;
    for(count=1;count<=maxedge;count++)
    {
        printf("enter edge%d(-1,-1 to quit):",count);
        scanf("%d %d",&origin,&destin);
        if((origin==-1)&&(destin==-1))
        {
            break;
        }
        if(origin>=n||destin>=n||origin<0||destin<0)
        {
            printf("invalid edge\n");
            count--;
        }
        else
        {
            adj[origin][destin]=1;
            adj[destin][origin]=1;
        }
    }
}
int main()
{
    creategraph();
    bftraversal();
    return 0;

}


