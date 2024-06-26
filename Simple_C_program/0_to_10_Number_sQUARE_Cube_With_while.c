#include<stdio.h>

int main()
{
int a=0;

printf("Number\tSquare\tCube\n");

while(a<=10)

{
printf("%d\t%d\t%d\n",a,a*a,a*a*a);

a=a+1;
}

}