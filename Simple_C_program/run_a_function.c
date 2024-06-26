#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(int argc, char const *argv[])
{
    int x,fx;
    printf("Enter the value of x:");
    scanf("%d",&x);

    fx=pow(x,4)+(5*x)-3;

    printf("x=%d f(x)=%d",x,fx);

    return 0;

}
