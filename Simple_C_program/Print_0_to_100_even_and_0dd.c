#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a=1,b,sum1=0,sum2=0;
    printf("Odd Number\tSum of Odd\tEven Number\tSum of Even \n");
    while (a<=99)
    {
        b=a+1;
        sum1=sum1+a;
        sum2=sum2+b;
        printf("%10d\t%10d\t%10d\t%10d\n",a,sum1,b,sum2);
        a=a+2;
    }
    

    return 0;
}
