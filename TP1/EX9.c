#include <stdio.h>

int main()
{
    int number1, number2, min, pgcd;

    printf("enter un nomber ");
    scanf("%d", &number1);
    printf("enter un nomber 2 ");
    scanf("%d", &number2);
    if (number1 > number2)
    {
        min = number2;
    }
    else
    {
        min = number1;
    }
    for (int i = 1; i <= min; i++)
    {
        if (number1 % i == 0 && number2 % i == 0)
        {
            pgcd = i;
        }
    }
    printf("le pgcd de %d et %d est : %d", number1, number2, pgcd);
}