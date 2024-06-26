#include<stdio.h>

const int MAX=3;

int main()
{
    int var[]={10,100,200};
    int i,*ptr;

    ptr=var;
    for(i=0;i<MAX;i++)
    {
        printf("Address of var[%d]=%x\n",i,ptr);
        printf("value of var[%d]=%d\n",i,*ptr);

        ptr++;

        printf("\n");
    }
    return 0;
}
