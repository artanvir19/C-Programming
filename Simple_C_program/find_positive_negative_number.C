#include<stdio.h>
#include<conio.h>
int main()
{
    int N;

    printf("Enter a Number:");
    scanf("%d",&N);
    if(N>0)
    {
    printf("This number is Positive");
    }

    else if (N==0)
    {
     printf("This number is Zero");
    }
    else{
        printf("This number is Negative");
    }
    return 0;
}
