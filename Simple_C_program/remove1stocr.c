#include<stdio.h>
#include<string.h>
int main(int argc, char const *argv[])
{
    int i,len;
    char ch,str[100];
    scanf("%s",str);
    scanf(" %c",&ch);
    len=strlen(str);
    for ( i = 0; i<len; i++)
    {
       if (str[i]==ch)
       {
        str[i]=str[i+1];

        len--;
        i--;

       }

    }
    str[i]='\0';
     printf("%s",str);

    return 0;
}
