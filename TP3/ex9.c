#include <stdio.h>
int power(int x, int y)
{
    int p=1;
    for (int i = 0; i < y; i++)
    {
         p*=x;
    }
    
    

    return p;
}

int main()
{
    int n,m;
    printf("enter un nomber\n ");
    scanf("%d", &n);
    printf("enter l'exposant\n ");
    scanf("%d", &m);
    printf("%d a la puissance %d est : %d", n,m, power(n,m));

    return 0;
}
