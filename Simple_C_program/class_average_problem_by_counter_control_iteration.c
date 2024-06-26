#include<stdio.h>

int main()
{
    unsigned int counter;
    int number;
    int total;
    float average;

    total =0;
    counter=1;

    while(counter<=5)
    {
        printf("Enter Number:");
        scanf("%d",&number);
        total=total+number;
        counter=counter+1;
    }
    average=(float)total/5;
    printf("average number is %f",average);

}
