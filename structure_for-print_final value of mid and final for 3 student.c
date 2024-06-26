#include <stdio.h>

struct student
{
    char name[50];
    int midterm[5];
    int final[5];
    int total[5];
};
struct subject
{
  char sub[100];
};

int main()
{
    struct subject Sub[10];
    struct student stu[3];
   int n;
    printf("Enter the subject name");
     for(int i=0;i<5;i++)
     {
        gets(Sub[i].sub);
        fflush(stdin) ;
     }

    for (int i = 0; i < 3; i++)
    {
        printf("Enter name of student %d: ", i + 1);
        scanf("%s", &stu[i].name);
        printf("Enter midterm scores of student %d (5 subjects): \n", i + 1);
        for (int j = 0; j < 5; j++)
        {
            printf("%s",Sub[j].sub);
            scanf("%d", &stu[i].midterm[j]);
        }
        printf("Enter final scores of student %d (5 subjects): \n", i + 1);
        for (int j = 0; j < 5; j++)
        {
            printf("%s",Sub[j].sub);
            scanf("%d", &stu[i].final[j]);
        }
    }


    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            stu[i].total[j] = stu[i].midterm[j] + stu[i].final[j];
        }
    }

    printf("\nEnter the no of student you want to print:");

   scanf("%d",&n);
    for (int i = 0; i < 3; i++)
    {
        printf("Total scores of %s in 5 subjects:\n", stu[i].name);
        printf("Subject Midterm Final Total\n");
        for (int j = 0; j < 5; j++)
        {
            if(i==n-1){
            printf("%s %9d %6d %6d\n", Sub[j].sub, stu[i].midterm[j], stu[i].final[j], stu[i].total[j]);
        }
        }
        printf("\n");
    }

    return 0;
}
