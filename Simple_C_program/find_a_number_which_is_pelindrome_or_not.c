#include<stdio.h>

int main()
{
    int number,revNumber=0,rem=0,tempNumber;

    printf("Enter an Integer:");
    scanf("%d",&number);

    tempNumber=number;

    while(tempNumber!=0)

    {
        rem=tempNumber%10;
        revNumber=revNumber*10+rem;
        tempNumber/=10;
    }

    if(revNumber==number)
        printf("%d is a palindrome.",number);
    else
        printf("%d is not a palindrome.",number);

    return 0;
}
