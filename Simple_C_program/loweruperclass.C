#include <stdio.h>
#include<conio.h>

int main(int argc, char const *argv[])
{
    char ch;
    printf("Enter the character:");
    scanf("%c",&ch);

    if (ch>='a' && ch<='z')
    {
    printf("this is lower class",ch);
    }

    else if (ch>='A'&& ch<='Z')
    {
       printf("this is upper class",ch);
    }
    
    
    return 0;
}
