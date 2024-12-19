#include <stdio.h>
int main()
{
    int grade;
    do
    {
        printf("enter your  grades between 0 and 100 : ");
        scanf("%d", &grade);

        if (grade < 0 || grade > 100)
        {
            printf("try again \n");
        }

    } while (grade < 0 || grade > 100);

    if (grade >= 80)

    {
        printf("very good\n");
    }
    else if (grade >= 65 && grade <= 79)
    {
        printf("good\n");
    }
    else if (grade >= 50 && grade <= 64)
    {
        printf("not bad\n");
    }
    else
    {
        printf("failed\n");
    }

    return 0;
}