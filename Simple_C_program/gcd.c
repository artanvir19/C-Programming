#include<stdio.h>
int gcd(int x ,int y)
{
    if (x>y)
     return gcd(x-y,y);
    else if (x<y)
    {
      return   gcd(x,y-x);
    }
    return x;
}

int main()
{

    int a,b;
    int gcdm;

    scanf("%d%d",&a,&b);
    
    gcdm=gcd(a,b);

    printf("%d",gcdm);
    return 0;
    }