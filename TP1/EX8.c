#include <stdio.h>

int main()
{
    float C,F;
    printf("enter la temperature en celsius ");
    scanf("%f",&C);

     F = ((9.0 / 5.0) * C) + 32;

    printf(" la temperature en Fahrenheit est : %.2f " , F);
    return 0;
}