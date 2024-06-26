#include<stdio.h>
#include<string.h>
int max(int x,int y)
{

   if(x<y)
    return y;
   else
    return x;
}
int lcs(char *s1,char *s2,int i,int j)
{

    if (i==0||j==0)
        return 0;
    else if(s1[i-1]==s2[j-1])
        return 1+lcs(s1,s2,i-1,j-1);
    else
        return max(lcs(s1,s2,i,j-1),lcs(s1,s2,i-1,j));
}
int main()
{
    char s1[100],s2[100];
    printf("Enter 1st string:");
    scanf("%s",s1);
    printf("\nEnter 2nd string:");
    scanf("%s",s2);
    int l1=strlen(s1);
    int l2=strlen(s2);

    int length=lcs(s1,s2,l1,l2);
    printf("\nLcs= %d",length);
}
