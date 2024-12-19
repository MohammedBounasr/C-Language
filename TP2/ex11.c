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
            printf("enter l'elements de ling %d et de collgong  de  matrice %d \n", i + 1, j + 1);
            scanf("%d", &tab[i][j]);
        }
    }
    printf(" normal \n");
    for (i = 0; i < n; i++)
    {
        printf("|");
        for (j = 0; j < m; j++)
        {
            printf("\t %d \t", tab[i][j]);
        }
        printf("|\n");
    }

    printf(" transpose \n");
    for (i = 0; i < m; i++)
    {
        printf("|");
        for (j = 0; j < n; j++)
        {
            printf("\t %d \t", tab[j][i]);
        }
        printf("|\n");
    }
}