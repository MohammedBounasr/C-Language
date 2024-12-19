#include <stdio.h>
int temp(int x)
{

    float F;
    F = x * (9.0 / 5.0) + 32;
    return F;
}

int main()
{
    int c;
    printf("enter un la temperature en °C \n ");
    scanf("%d", &c);
    printf("  la temprature en Fahrenheit est : %d", temp(c));

    return 0;
}