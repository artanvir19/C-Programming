#include <stdio.h>
void knapsack(int n, float w[], float p[], float m);
int main()
{
    int n, i, j;
    printf("Enter the number of items:");
    scanf("%d", &n);
    float w[n], p[n], x[n], temp;
    printf("\nEnter the weight :\n");
    for (i = 0; i < n; i++)
    {
        scanf("%f", &w[i]);
    }
    printf("\nEnter the Profit\n");
    for (i = 0; i < n; i++)
    {
        scanf("%f", &p[i]);
    }
    for (i = 0; i < n; i++)
    {
        x[i] = p[i] / w[i];
    }

    float m;
    printf("\nEnter maximum weight that can be carried : ");
    scanf("%f", &m);

    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (x[i] < x[j])
            {
                temp = x[j];
                x[j] = x[i];
                x[i] = temp;

                temp = w[j];
                w[j] = w[i];
                w[i] = temp;

                temp = p[j];
                p[j] = p[i];
                p[i] = temp;
            }
        }
    }

    knapsack(n, w, p, m);
}

void knapsack(int n, float w[], float p[], float m)
{
    float x[30], tprofit;
    int i, tweight;
    tweight = m;
    tprofit = 0.0;
    for (i = 0; i < n; i++)
        x[i] = 0.0;

    for (i = 0; i < n; i++)
    {
        if (w[i] > tweight)
            break;
        else
        {
            x[i] = 1.0;
            tprofit += p[i];
            tweight -= w[i];
        }
    }

    if (i < n)
    {
        x[i] = tweight / w[i];
        tprofit = tprofit + (x[i] * p[i]);
        for (i = 0; i < n; i++)
        {
            printf("\nfraction of  item= %0.2f", x[i]);
        }
        printf("\nthe maximum profit if %0.2f", tprofit);
    }
}
