#include <stdio.h>

int main(int argc, char const *argv[])
{
    int pass = 0;
    int fail = 0;
    int student = 1;
    int result;

    while (student <= 10)

    {
        printf("Enter Result,(pass=1,fail=2):");
        scanf("%d", &result);

        student = student + 1;

        if (result == 1)
        {
                pass = pass + 1;
        }

        else
        {
            fail = fail + 1;
        }
    }

    printf("passed:%d\n", pass);
    printf("failed:%d\n", fail);

    if (pass >= 8)
    {
        printf("give bonous to teacher\n");
    }

    return 0;
}
