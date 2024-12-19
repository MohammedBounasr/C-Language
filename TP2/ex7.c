#include <stdio.h>
int main()
{
    int i;
    int j;
    int n;
    int m;
    printf("enter le nombre des linge de tablaux ");
    scanf("%d", &n);
    printf("enter le nombre des colonge de tablaux ");
    scanf("%d", &m);
    int tab[n][m];
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf("enter l'elements de ling %d et de collgong %d \n", i + 1, j + 1);
            scanf("%d", &tab[i][j]);
        }
    }

    for (i = 0; i < n; i++)
    {
        printf("|");
        for (j = 0; j < m; j++)
        {
            printf("\t %d \t", tab[i][j]);
        }
        printf("|\n");
    }

    return 0;
}
