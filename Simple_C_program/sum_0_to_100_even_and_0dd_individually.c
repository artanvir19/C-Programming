#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a=1,b,sum1=0,sum2=0;

     printf("Odd Number\tEven Number \n");
    while (a<=99)
    {
        b=a+1;
        printf("%10d\t%10d\n",a,b);
        

        sum1=sum1+a;
        sum2=sum2+b;

        a=a+2;

    }
    
   
    printf("\nThe sum of Odd number from 0 to 100 is :%d\n\n",sum1);
    printf("The sum of Even number from 0 to 100 is :%d\n\n",sum2);
    return 0;
}

