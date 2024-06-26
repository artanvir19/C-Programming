#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a,b,n,m;
    printf("Enter The Value of N AND M:\n");
    scanf("%d%d",&n,&m);

   

    while (n<=m)
    {
         a=n;
       b=a%2;

    if (b==0)
    {
        printf(" %d is Even\n",n);
    }
    else
    {
        printf(" %d is Odd\n",n);

    }

    n=n+1;

    }
    
    return 0;
}
