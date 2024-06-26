#include<stdio.h>
int binary(int arr[],int n,int x)
{
    int l=0,r=n-1,mid;

    while (l<=r)
    {
        mid=(l+r)/2;

        if(arr[mid]==x)
            return mid;
        else if(arr[mid]<x)
          l=mid+1;
        else
            r=mid-1;


    }
    return -1;

}

int main(int argc, char const *argv[])
{
    int arr[]={1,2,3,4,5,6,8,9};
    int n=8;
    int x=5;

    int index=binary(arr,n,x);

    if(index==-1)
        printf("%d is not found",x);
    else
    printf("%d is found at index %d",x,index);
    return 0;
}
