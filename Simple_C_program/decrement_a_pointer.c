#include<stdio.h>

const int MAX=3;

int main()
{
    int var[]={10,100,200};
    int i,*ptr;

    ptr=&var[MAX-1];
    for(i=MAX;i>0;i--)
    {
        printf("Address of var[%d]=%x\n",i,ptr);
        printf("value of var[%d]=%d\n",i,*ptr);

        ptr--;

        printf("\n");
    }
    return 0;
}
