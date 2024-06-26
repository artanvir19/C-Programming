#include <stdio.h>
 int main(int argc, char const *argv[])
 {
    int n,i,m;

    printf("Enter the value of m:");
    scanf("%d",&m);

    for ( n = 1; n <=m; n++)
    {
        for ( i = 1; i <=10; i++)
        {
            printf("%d x %d = %d\n",n,i,n*i);
        }
    }
    

    return 0;
 }
 