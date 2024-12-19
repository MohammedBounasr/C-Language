#include <stdio.h>

int main()
{

    int note, count = 0, sum = 0;
    float moy;
    char quit;
    do
    {

        printf("enter your grades ");
        scanf("%d", &note);

        printf("your grade is: %d\n", note);
        sum += note;
        count++;
        printf("do you want to enter an other note (y/n) ");
        scanf(" %c", &quit);
    } while (quit == 'y' || quit == 'Y');

    if (count > 0)
    {
        moy = (float)sum / count;
        printf("The average of the notes is: %.2f\n", moy);
    }
    else
    {
        printf("No notes were entered.\n");
    }
}