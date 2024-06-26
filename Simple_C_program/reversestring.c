#include<stdio.h>
#include<string.h>

int main(int argc, char const *argv[])
{
    int i,j,len;
    char str[20],revstr[200];
    scanf("%s",str);
    len=strlen(str);
    for(i=len-1,j=0;i>=0;i--,j++)
    {
        revstr[j]=str[i];
    }
    revstr[j]='\0';

    printf("%s",revstr);
    return 0;
}

