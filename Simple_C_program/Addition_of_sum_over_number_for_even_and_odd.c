#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a=1,b,sum1=0,sum2=0;

     printf("Odd Number\tSum of odd Number\tEven Number\t Sum of Even Numver \n");
    while (a<=99)
    {
        b=a+1;
        sum1=sum1+a;
        sum2=sum2+b;
        printf("%10d\t%17d\t%10d\t%18d\n",a,sum1,b,sum2);
        



        a=a+2;

    }
    
   
    printf("The sum of Odd number from 0 to 100 is :%d\n",sum1);
    printf("The sum of Even number from 0 to 100 is :%d\n",sum2);
    return 0;
}
