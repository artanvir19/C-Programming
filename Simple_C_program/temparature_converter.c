#include<stdio.h>
#include<conio.h>

  int main()


{
    double C,F;
    int choice;
    printf("1.Centigrade to Fahrenheit.\n");
    printf("2.Fahrenheit to Centigrade.\n");
    printf("Enter choice:");
    scanf("%d",&choice);
    if (choice==1)
    {
        printf("Enter the value of Centigrade : ");
        scanf("%f",&C);

        F=9*C/5+32;
        printf("The value of Fahrenheit is:%2f",F);

    }

    else if (choice==2)

    {
        printf("Enter the value of Fahrenheit :");
        scanf("%f",&F);

        C=(F-32)*5/9;

        printf("The value of Centigrade is %2f",C);

    }
    return 0;
}
