#include<stdio.h>
#define SIZE 5
int main()
{
    int n[SIZE]={19,43,15,7,11};
    printf("%s%13s%17s\n","Element","value","Histogram");

    for(size_t i=0;i<SIZE;++i)
    {
        printf("%7u%13d       ",i,n[i]);

        for(int j=1;j<=n[i];++j)
        {
            printf("%c",'#');
        }
        puts("");
    }
}
