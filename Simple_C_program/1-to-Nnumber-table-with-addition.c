#include <stdio.h>

int main()
{
    int a,m,n,i;

    printf("Enter the value of n:");
    scanf("%d",&m);
    
    for(n=1;n<=m;n=n+1)
    {
    a=0;
   
    for(i=1;i<=10;i=i+1)
    {
      a=a+n;
    printf("%d x %d =%d\n",n,i,a);
    
    }
    }
    
    return 0;
    }
