#include<stdio.h>

int main()
{
    int number,sum=0,rem=0,tempNumber;

    printf("Enter an integer Number:");
    scanf("%d",&number);

    tempNumber=number;

    while (tempNumber!=0)
    {
        rem=tempNumber%10;
        sum=sum+(rem*rem*rem);
        tempNumber/=10;
    }

    if(sum==number)




    printf("%d is an Armstrong Number",number);
    else
    printf("%d is not an Armstrong Number",number);

    return 0;
}
