#include<stdio.h>

int main()
{
    unsigned int counter;
    int number;
    int total;
    float average;

    total=0;
    counter=0;
    printf("Enter Number, (-1 to positive end):");
    scanf("%d",&number);

    while(number!=-1)
    {
        total=total+number;
        counter=counter+1;
         printf("Enter Number, (-1 to positive end):");
        scanf("%d",&number);

    }

    if(counter!=0)
    {
        average=(float)total/counter;
        printf("The average value is %f",average);
    }
    else
    {
        printf("No Number is Given.");
    }
}