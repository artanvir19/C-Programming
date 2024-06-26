#include<stdio.h>
#include<string.h>
int main(int argc, char const *argv[])
{
    int i ,j,len,t=1;
    char str[100];

    gets(str);
    len=strlen(str);
    for ( i = 0; i<len; i++)
    {
        if
        (str[i]!=str[len-i-1])
{


        t=0;
        break;

}
    }

    if (t==1)
    {
        printf("polindrome");
    }
    else
    printf("not");


    return 0;
}
