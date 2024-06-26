#include<stdio.h>

const int MAX=3;
int main()
{
    char *names[]={
                "Tanvir",
                "Zohan",
                "Araf"
                };

    int i;

    for(i=0;i<MAX;i++)
    {
        printf("Value of name[%d]=%s\n",i,names[i]);
    }


}
