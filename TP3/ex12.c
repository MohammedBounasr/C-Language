#include <stdio.h>

int grades(int grade)
{

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
}
int main()
{
    int note;
    do
    {
        printf("enter your  grades between 0 and 100 : ");
        scanf("%d", &note);

        if (note < 0 || note > 100)
        {
            printf("try again \n");
        }

    } while (note < 0 || note > 100);
    grades(note);

    return 0;
}
