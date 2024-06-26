#include<stdio.h>
int main()
{
    int salesamount[100][100];
    int n,p;
    int i,j,total[100];

    printf("Enter the number or Salesman");
    scanf("%d",&n);

    printf("\nEnter the number or product");
    scanf("%d",&p);

    for ( i = 0; i < n; i++)
    {
        printf("\nEnter the product Item for salesman %d\n",i+1);
        total[i]=0;
        for ( j= 0; j <p; j++)
        {
            printf("Item No %d=",j+1);
            scanf("%d\n",&salesamount[i][j]);
            total[i]+=salesamount[i][j];
        }
        printf("\n\n");
        
    }

    printf("Sales Report");
    printf("-----------------------------------");
    
    for ( i = 0; i <n; i++)
    {
        for ( j = 0; j < p; j++)
        {
          printf("Item 1=%d\n", salesamount[i][j]);
        }
        printf("-------------\n");
        printf("Total=%d\n",total[i]);

        printf("Comission of salesman %d=%d\n",i,(total[i]*10)/100);

        printf("\n\n");
        
    }
    



    
}