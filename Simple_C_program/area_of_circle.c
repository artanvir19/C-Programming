#include<stdio.h> 
#include <conio.h>

#define PI 3.14

int main()
{
    float A,r;
    
    printf("Enter the radious of Circle:");
    scanf("%f",&r);

    A =PI*r*r;

    printf("The are of Circle %f ",A);

    return 0;
}
