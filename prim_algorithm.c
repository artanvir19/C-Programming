#include<stdio.h>
int main()
{
    int n,i,j,cost[30][30],visited[30]={0},node1,node2,u,v,edge=1,min,tempcost=0;
    printf("Enter the number of Nodes: ");
    scanf("%d",&n);
    printf("\nEnter the adjacency Matrix:\n");
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            scanf("%d",&cost[i][j]);
            if(cost[i][j]==0)
            {
                cost[i][j]=999;
            }
        }
    }
    visited[1]=1;
    while(edge<n)
    {
        for(min=999,i=1;i<=n;i++)
        {
            for(j=1;j<=n;j++)
            {
                if(cost[i][j]<min)
                {
                    if(visited[i]!=0)
                    {
                        min=cost[i][j];
                        node1=u=i;
                        node2=v=j;
                    }
                }
            }
        }

        if(visited[u]==0 || visited [v]==0)
        {
            printf(" Edge %d\t(%d to %d) =\t%d\n",edge++,node1,node2,min);
            tempcost+=min;
            visited[node2]=1;
        }
        cost[node1][node2]=cost[node2][node1]=999;
    }
    printf("\nthe minimum cost = %d",tempcost);
/*0 6 4 0 0 0
6 0 2 1 4 0
4 2 0 5 3 0
0 1 5 0 0 2
0 4 3 0 0 7
0 0 0 2 7 0*/
}

