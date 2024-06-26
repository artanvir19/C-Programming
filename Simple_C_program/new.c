#include<stdio.h>
int main(int argc, char const *argv[])
{

    int n=5,i;
    int a[n];

    for ( i = 0; i <n; i++)
    {
        scanf("%d",&a[i]);
    }
    for ( i = 0; i < n; i++)
    {
        printf("Element %d is: %d\n",i+1,a[i]);
    }
    
    


    return 0;
}
