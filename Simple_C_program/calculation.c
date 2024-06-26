#include <stdio.h>

int main(void)
{


    int a,b,addition,subtraction,multiplication,division,remainder;

    printf("Enter Two Number:\n");
    scanf("%d%d",&a,&b);

    addition=a+b;
    subtraction=a-b;
    multiplication=a*b;
    division=a/b;
    remainder=a%b;

    printf("The sum of %d and %d is %d\n",a,b,addition);
    printf("The subtraction of %d and %d is %d\n",a,b,subtraction);
    printf("The multiplication of %d and %d is %d\n",a,b,multiplication);
    printf("The division of %d and %d is %d\n",a,b,division);
    printf("The remainder of %d and %d is %d\n",a,b,remainder);

    return 0;
}
