#include <stdio.h>

int main()
{
    int number;
    printf("enter un nomber ");
    scanf("%d", &number);
    int f = 1;
    for (int i = 1; i <= number; i++)
    {
        if (number > 1)
        {
            f *= i;
        }
       
    }
    printf(" le factoriele de %d est : %d", number, f);

    return 0;
}