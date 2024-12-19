#include <stdio.h>
int somme(int x, int y)
{

    int s = x+y;

    return s;
}

int main()
{
   int n , m;
    printf("enter un nomber\n ");
    scanf("%d", &n);
    printf("enter un nomber\n ");
    scanf("%d", &m);
    printf("%d",somme(n,m));
    return 0;
}