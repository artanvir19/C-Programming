#include<stdio.h>
#include<math.h>
int main(int argc, char const *argv[])
{
    double principal=1000.0;
    double rate=.05;
    unsigned int year;

    printf("%4s%21s\n","Year","Amount of Deposite");

   for(year=1;year<=10;++year)
    {
        double amount=principal*pow(1.0+rate,year);

        printf("%4u%21.2f\n",year,amount);

    }
    return 0;
}
