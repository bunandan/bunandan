#include<stdio.h>
#include<stdlib.h>
#define max 100
#define initial 1
#define visited 2
int n;
int adj[max][max];
int state[max];
void dftraversal();
void dfs(int v);
void  creategraph();
int stack[max];
int top=-1;
void push(int v);
int pop();
int isemptystack();
void main()
{
  creategraph();
  dftraversal();
}
void dftraversal()
{
    int v;
    for(v=0;v<n;v++)
    {
        state[v]=initial;

    }
    printf("enter starting vertex for dfs :");
    scanf("%d",&v);
    dfs(v);
    for(v=0;v<n;v++)
    {
        if(state[v]==initial)
            dfs(v);
    }
    printf("\n");
}
void dfs(int v)
{
    int i;
    push(v);
    while(!isemptystack())
    {
        v=pop();
        if(state[v]==initial)
        {
            printf("%d\t",v);
            state[v]=visited;
        }
        for(int i=n-1;i>=0;i--)
        {
            if(adj[v][i]==1&&state[i]==initial)
            {
                push(i);
            }
        }
    }
}
void push(int v)
{
    if(top==(max-1))
    {
        printf("stack overflow\n");
        return ;
    }
    top=top-1;
    stack[top]=v;
}
int pop()
{
    int v;
    if(top==-1)
    {
        printf("stack underflow\n");
        exit(1);

    }
    else
    {
        v=stack[top];
        top=top-1;
        return v;

    }
}
int isemptystack()
{
    if(top==-1)
    {
        return 1;
    }
        else
        {
            return 0;
        }

}
void creategraph()
{
    int i,maxedges,origin,destin;
    printf("enter the number of vertices :\n");
    scanf("%d",&n);
    maxedges=n*(n-1)/2;
    for(int i=1;i<=maxedges;i++)
    {
        printf("enter the edges %d(-1,-1 to quit):",i);
        scanf("%d %d",&origin,&destin);
        if((origin==-1)&&(destin==-1))
        {
            break;
        }
        if(origin>=n||destin>=n||origin<0||destin<0)
    {
        printf("invalid edge!\n");
        i--;
    }
    else
    {
        adj[origin][destin]=1;
        adj[destin][origin]=1;
    }
    }
}
