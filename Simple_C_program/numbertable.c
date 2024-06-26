#include <stdio.h>

int main()
{
    int m=0, n,i=1;

    printf("Enter the value of n:");

    scanf("%d",&n);

    while (i<=10)

    {
        m=m+n;
        printf("%d x %d = %d\n",n,i,m);

        i=i+1;


    }

     return 0;
}
