#include <stdio.h>

int main(void)
{
    unsigned int counter;
    int grade;
    int total;

    float average;

    total = 0;
    counter = 0;

    printf("Enter number, -1 to end: ");
    scanf("%d", &grade);

    while (grade!=-1)
        
    {
        total = total + grade;
        counter=counter+1;
        

        printf("Enter number,-1 to end:");
        scanf("%d",&grade);
    }

    if (counter != 0)
    {
        average = total / counter;
        printf("Class average is %.2lf", average);
    }
    else
    {
        printf("No numbers were entered");
    }
    return 0;
}
