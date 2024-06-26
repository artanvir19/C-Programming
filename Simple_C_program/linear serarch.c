#include<stdio.h>
int linear(int arr[],int n,int x)
{
    int i;
     int found=0;
    for ( i = 0; i <n; i++)
    {
        if(arr[i]==x)
        {
            printf("%d is found at position %d",x,i+1);
            found=1;
            break;
        }

    }
    if (found==0)
    printf("element not found");
    return 0;

}

int main(int argc, char const *argv[])
{
    int arr[]={1,2,3,2,6,2,8,9};
    int n=8;
    int x=6;

    linear(arr,n,x);

    return 0;
}
