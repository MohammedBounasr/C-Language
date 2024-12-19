#include <stdio.h>

int main()
{
    int n;
    printf("enter le nombre dz case de tableau : ");
    scanf("%d", &n);

    int tab[n];
    for (int i = 0; i < n; i++)
    {
        printf("entrer l' element %i \n", i + 1);
        scanf("%d", &tab[i]);
    }

    printf("Elements inverse:\n");
    for (int i = n - 1; i >= 0; i--)
    {
        printf("%d\n", tab[i]);
    }

    return 0;
}
