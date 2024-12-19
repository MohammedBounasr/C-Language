#include <stdio.h>

int main()
{
    int number;

    for (int i = 0; i < 10; i++)
    {
        printf("enter  a nomber ");
        scanf("%d", &number);
        if (number < 0)
        {
            continue;
        }
        printf(" %d \n", number);
    }

    return 0;
}