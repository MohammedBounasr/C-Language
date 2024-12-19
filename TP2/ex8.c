#include <stdio.h>

int main()
{
    int n, m;
    printf("enter le nombre de linge");
    scanf("%d", &n);
    printf("enter le nombre de colonge");
    scanf("%d", &m);

    int tab1[n][m], tab2[n][m], tab3[n][m];
    // fill the  two array and calculate the addition
    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf("enter l'elements de ling %d et de collgong %d \n", i + 1, j + 1);
            scanf("%d", &tab1[i][j]);
            tab2[i][j] = tab1[i][j];
            tab3[i][j] = tab2[i][j] + tab1[i][j];
        }
    }

    printf("la marice 1 :\n");
    for (i = 0; i < n; i++)
    {
        printf("|");
        for (j = 0; j < m; j++)
        {
            printf(" \t%d\t ", tab1[i][j]);
        }
        printf("|\n");
    }

    printf("la marice 2 :\n");
    for (i = 0; i < n; i++)
    {
        printf("|");
        for (j = 0; j < m; j++)
        {
            printf("\t%d\t", tab2[i][j]);
        }
        printf("|\n");
    }

    printf("la somme de deux matrice :\n");
    for (i = 0; i < n; i++)
    {
        printf("|");
        for (j = 0; j < m; j++)
        {
            printf("\t%d\t", tab3[i][j]);
        }
        printf("|\n");
    }
}