#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a[100],size,i,j;
   int ra[100];

    scanf("%d",&size);

    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);

    }


    for ( i =size-1,j=0; i>=0; i--,j++)
    {
        ra[j]=a[i];
    }


    for ( j = 0; j <size; j++)
    {
        printf("%d",ra[j]);
    }
    
    

    return 0;
}
