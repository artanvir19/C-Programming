#include<stdio.h>
#include<conio.h>
int main()
{
    int x,y,z;

    printf("Enter your three number :");
    scanf("%d %d %d",&x,&y,&z);
    if ((x>y)&&(x>z))
    {
        printf("Large number is %d",x);
    }
    else if ((y>x)&&(y>z))
    {
        printf("Large number is %d",y);
    }
    else
    printf("Large number is %d",z);
    

    return 0;
}
