#include<stdio.h>
int main()
{
    int sum1=0,sum2=0,a=1,b;

    while(a<=99)
    {
        b=a+1;
        sum1=sum1+a;
        sum2=sum2+b;
        a=a+2;
    }

    printf("Sum of Odd is %d\tSum of Even is%d",sum1,sum2);
    return 0;
}
