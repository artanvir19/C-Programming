
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    int Y;
    printf("Enter Year:");
    scanf("%d",&Y);
    if (Y%400==0)

    {
        printf("This is Leap Year");
    }
    else if ((Y%100!=0)&&(Y%4==0))
    {
        printf("This is Leap year");

    }
    else printf("This is not Leap Year");

    return 0;
}
