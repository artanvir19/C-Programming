#include<stdio.h>

int main()
{
   int a,b,c,sum;
   float average;

   printf("Enter Three Numbers:\n");
   scanf("%d%d%d",&a,&b,&c);

   sum=a+b+c;
   average =(float) sum / 3;

   printf("The sum is %d\n",sum);
   printf("The average is %.2f",average);

    return 0;
}
