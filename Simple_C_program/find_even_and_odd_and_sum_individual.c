#include<stdio.h>

int main()
{
    int a=1;
    int sum=0;
    while(a<100)
    {
        sum=sum+a;

        printf("The number %d is odd\n",a);

        a=a+2;
    }
    printf("The sum is %d\n",sum);


    a=2;

    while(a<=100)
    {
        sum=sum+a;

        printf("The number %d is even\n",a);

        a=a+2;

        
    }
    printf("The sum is %d",sum);
}
