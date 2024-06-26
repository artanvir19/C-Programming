#include<stdio.h>
#include<ctype.h>

int main()
{
    char ch;

    printf("Please Enter any alphabet\n");
    scanf("%c",&ch);

    if(isalpha(ch))
    {
        ch=toupper(ch);
        printf("\n Uppercase of Entered character is %c",ch);
    }
    else{
        printf("\n please Enter Valid Alphabet");
    }
}
