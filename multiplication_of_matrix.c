#include <stdio.h>
int main()
{
    int i, j, k, m1, n1, m2, n2;
    printf("Enter the row and column of 1st matrix:\n");
    printf("\nRow:");
    scanf("%d", &m1);
    printf("\nColumn:");
    scanf("%d", &n1);

    printf("\nEnter the row and column of 2st matrix:");
    printf("\nRow:");
    scanf("%d", &m2);
    printf("\nColumn:");
    scanf("%d", &n2);

    int a[m1][n1], b[m2][n2], M[m1][n2];

    printf("\nEnter the element of 1st Matrix:\n");

    for (i = 0; i < m1; i++)
    {
        for (j = 0; j < n1; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nEnter the element of 2nd Matrix:\n");

    for (i = 0; i < m2; i++)
    {
        for (j = 0; j < n2; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }


for (i = 0; i < m1; i++)
    {
        for (j = 0; j < n2; j++)
         {
             M[i][j]=0;

            for (k = 0; k <n1; k++)
            {
                M[i][j] += a[i][k]*b[k][j];
            }
        }
    }




    printf("\n1st Matrix is:\n");

    for (i = 0; i < m1; i++)
    {
        for (j = 0; j < n1; j++)
        {
            printf("%4d", a[i][j]);
        }
        printf("\n\n");
    }

    printf("\n2nd matrix is :\n");

    for (i = 0; i < m2; i++)
    {
        for (j = 0; j < n2; j++)
        {
            printf("%4d", b[i][j]);
        }
        printf("\n\n");
    }
    printf("\n\nThe multiplication of two array is :");

    for (i = 0; i < m1; i++)
    {
        for (j = 0; j < n2; j++)
        {
            printf("%4d", M[i][j]);
        }
        printf("\n");
    }
}
