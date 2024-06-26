#include<stdio.h>
void swap(char*a, char*b)
{
    char temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    char num[4];
    scanf("%s",num);
    num[2]='\0';
    printf("OUTPUT\n");
    printf("%s\n",num);
    int a=1;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 1; j <3; j++)
        {
            swap(&num[0],&num[j]);
            a++;
            if (a!=7)
            {
                printf("\n%s",num);
            }
        }
    }
    return 0;
}
