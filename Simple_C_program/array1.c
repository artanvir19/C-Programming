#include<stdio.h>
#define SIZE 5
int main()
{
    int n[SIZE]={19,43,15,7,11};

    printf("%s%13s\n","Element","value");

    for(size_t i=0;i<SIZE;++i)
    {
       n[i]=0;



    }
     for(size_t i=0;i<SIZE;++i)
    {
        printf("\n%7u%13d",i,n[i]);
    }
}
