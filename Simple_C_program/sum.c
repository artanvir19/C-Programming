#include<stdio.h>
int add(int a1,int b1);

int main()
{
    int x,y;
    printf("Enter the value of x,y:");
    scanf("%d%d",&x,&y);

     int sum=add(x,y);

     printf("%d",sum);

    return 0;
}



int add(int a1,int b1)
{
    int sum;
 sum=a1+b1;

   return sum;
}
