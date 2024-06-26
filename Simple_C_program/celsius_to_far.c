#include<stdio.h>
#include<conio.h>

int main()
{
    float fahrenheit,celsius;
    printf("Enter Temperature value (in celsius):");
    scanf("%f",&celsius);

   fahrenheit=(1.8*celsius)+32;

    printf("\n Equivalent Temperature (in Celsius)=%0.2f",fahrenheit);
    getch();
    return 0;
}
