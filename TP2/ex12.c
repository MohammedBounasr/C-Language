#include <stdio.h>

int main()
{
    int n, m;
    printf("enter le nombre de linge");
    scanf("%d", &n);
    printf("enter le nombre de colonge");
    scanf("%d", &m);

    int tab[n][m];
    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf("enter l'elements de ling %d et de collgong %d de  matrice  \n", i + 1, j + 1);
            scanf("%d", &tab[i][j]);
        }
    }

    if (m == n)
    {
        printf("la matrice est symetrique\n ");
    }

    else
    {
        printf("la matrice nest pas symetrique\n ");
    }
    for (i = 0; i < n; i++)
    {
        printf("|");
        for (j = 0; j < m; j++)
        {
            printf(" \t%d\t ", tab[i][j]);
        }
        printf("|\n");
    }
}
