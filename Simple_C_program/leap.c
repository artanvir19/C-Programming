#include<stdio.h>
int main(int argc, char const *argv[])
{
    int y ;
    scanf("%d",&y);

    if(y%100==0&&y%400)
    printf("leap");
    else if (y%100!=0&&y%4==0)
    {
        printf("leap");

    }
    else
    printf("not");
    return 0;
}
