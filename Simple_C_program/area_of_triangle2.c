#include<stdio.h>
#include<math.h>
int main(int argc, char const *argv[])
{
    float A,s,x,y,z;
    printf("Enter the value of s,x,y,z:\n");
    scanf("%f%f%f%f",&s,&x,&y,&z);
    A=sqrt(s*(s-x)*(s-y)*(s-z));
    printf("Area %4f",A);
    return 0;
}
