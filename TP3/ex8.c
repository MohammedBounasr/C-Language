#include <stdio.h>
int somme(int x)
{
    int s = 0;
    for (int i = 0; i <= x; i++)
    {
        s += i;
    }

    return s;
}

int main()
{
    int n;
    printf("enter un nomber\n ");
    scanf("%d", &n);
    printf("la somme de %d premier entier positiv est : %d\n", n, somme(n));

    return 0;
}