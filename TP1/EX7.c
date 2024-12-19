#include <stdio.h>

int main()
{
    int number, pow;
    float power=1;
    printf("enter un nomber ");
    scanf("%d", &number);
    printf("enter la puissance ");
    scanf("%d", &pow);
    if (pow >= 0)
    {
        
        for (int i = 0; i < pow; i++)
        {

            power = power * number; // or power*=number
        }
    }
    else
    {
       
        for (int i = 0; i < -pow; i++) // la valureur absulut de pow car il est negative on utilise la “x**−n=1/x**n”
        {

            power = power * number;
        }
        power = 1 / power;
    }

    printf(" le resultat de %d a la puissance %d est : %.2f", number, pow, power);

    return 0;
}