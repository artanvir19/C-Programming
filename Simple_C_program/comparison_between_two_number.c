#include<stdio.h>

int main ()

{
    int a,b;

    printf("Enter two Numbers:\n");
    scanf("%d%d",&a,&b);

    if(a>b)
    {
        printf("%d is greater than %d\n",a,b);
    }
    if(a<b)
    {
        printf("%d is less than %d\n",a,b);
    }

    if(a>=b)
    {
          printf("%d is greater than and equal to %d\n",a,b);
    }
    if(a<=b)
    {
         printf("%d is less than and equal to %d\n",a,b);
    }
    if(a==b)
    {
        printf("%d is equal to %d\n",a,b);
    }
    if(a!=b)
        {
           printf("%d is not equal to %d\n",a,b);
        }

}
