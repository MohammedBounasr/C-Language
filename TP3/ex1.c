#include <stdio.h>
int power(int x)
{

    int p = x * x;

    return p;
}

int main()
{
    int n;
    printf("enter un nomber\n ");
    scanf("%d", &n);
    printf("%d a la puissance 2 est : %d", n, power(n));

    return 0;
}
