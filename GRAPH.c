#include<stdio.h>
#define max 100
int adj[max][max];
int n;
int main()
{
    int maxedges,i,j,origin,destin;
    int graphtype;
    printf("enter 1 for undirected graph or 2  for directed graph:");
    scanf("%d",&graphtype);
    printf("enter the vertices:");
    scanf("%d",&n);
    if(graphtype==1)
    {
        maxedges=n*(n-1)/2;

    }
    else
    {
        maxedges=n*(n-1);
    }
    for(int i=1;i<=maxedges;i++)
    {
        printf("enter the edge %d(-1-1 to quit):",i);
        scanf("%d %d",&origin,&destin);
        if((origin==-1)&&(destin==-1))
        {
            break;
        }
        if(origin>=n||destin>=n||origin<0||destin<0)
        {
            printf("invalid vertex!\n");
            i--;
        }
        else
        {
            adj[origin][destin]=1;
            if(graphtype==1)
                adj[destin][origin]=1;
        }
    }
    printf("the adjacency matrix is :\n");
    for(int i=0;i<=n-1;i++)
    {
        for(int j=0;j<=n-1;j++)
        {
        printf("%d  ",adj[i][j]);
        }
            printf("\n");
        }

}

