#include<stdio.h>

int main()
{
    unsigned int counter;
    int integer;
    int sum;

    sum=0;
    counter=0;

    printf("Enter 1st integer:(0 to positive end)\n");
    scanf("%d",&integer);


    while(integer>0)
    {
        sum=sum+integer;
        counter=counter+1;
        printf("sum is %d\n",sum);
        printf("Enter another integer:\n");
        scanf("%d",&integer);
    }

    if(counter!=0)
    {
        printf("Sum is %d",sum);
    }
    else
    {
        printf("No integer is given");
    }
}
