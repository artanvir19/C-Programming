#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i,n,face=1;

    printf("Enter the number of n:");
    scanf("%d",&n);

    for ( i = 1; i <=n; i++)
    {
        face=face*i;
    }
    
    printf("factrial of %d is %d",n,face);
    return 0;
}
