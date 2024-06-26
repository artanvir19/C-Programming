#include<stdio.h>
int max,min,a[40];
void maxmin(int i,int j)
{
    if(i==j)
    {
        max=min=a[i];
    }
    else if(i==j-1)
    {
        if(a[i]<a[j])
        {
            max=a[j];
            min=a[i];
        }
        else{
                 max=a[i];
            min=a[j];

        }
    }

    else{
        int mid,max1,min1;
        mid=(i+j)/2;
        maxmin(i,mid);
        max1=max;
        min1=min;


        maxmin(mid+1,j);
        if(max<max1)
        max=max1;
        if(min>min1)
            min=min1;


    }
}

int main()
{
    int i, n;
    printf("Enter the number of input\n");
    scanf("%d",&n);
    printf("Enter the element of array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    min=max=a[0];
    maxmin(0,n-1);
    printf("\nthe maximum value is %d\n",max);
    printf("the minimum value is %d",min);

}
