#include<stdio.h>
int n,i,j,t;
int check(int s[],int j)
{
    int p=0;
    for ( i = 0; i < n; i++)
    {
        if (s[i] == j)
            p++;

    }
    if (p==0)
        return 1;
    else
        return 0;
}
int main()
{
    scanf("%d",&n);
    int p[n],d[n];

    for ( i = 0; i < n; i++)
    {
        scanf("%d%d", &p[i], &d[i]);
    }
    for ( i = 0; i <n; i++)
    {
        for ( j = i+1; j <n; j++)
        {
            if (p[i]<p[j])
            {
                t=p[i];
                p[i]=p[j];
                p[j]=t;

                t=d[i];
                d[i]=d[j];
                d[j]=t;

            }

        }

    }

    int slot[n];
    for ( i = 0; i < n; i++)
    {
        slot[i]=0;
    }

    for ( i = 0; i <n; i++)
    {
        for ( j=d[i]; j >0; j--)
        {
            if(check(slot,j)==1)
            {
                slot[i]=j;
                break;
            }
        }

    }

    for ( i = 0; i < n; i++)
    {
        if (slot[i]>0)
        {
            printf("\n%d %5d %10d %15d %20d\n",i+1,p[i],d[i],(slot[i]-1),slot[i]);
        }
        else
        {
            printf("\n%d %5d %10d \t Rejected\n",i+1,p[i],d[i]);
        }


    }


}