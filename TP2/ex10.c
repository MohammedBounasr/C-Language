#include <stdio.h>
int main()
{

    // to enter the size of the matrix
    int n, m;
    printf("enter le nombre de linge");
    scanf("%d", &n);
    printf("enter le nombre de colonge");
    scanf("%d", &m);

    int tab[n][m];

    // Input matrix elements
    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf("enter l'elements de ling %d et de collgong  de tablaux1 %d \n", i + 1, j + 1);
            scanf("%d", &tab[i][j]);
        }
    }

    // Initialize max with the first element
    int max = tab[0][0];
    // Loop through the array to find the maximum element
    for (i = 1; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            if (tab[i][j] > max)
            {
                max = tab[i][j];
            }
        }
    }

    printf("le plus grand element dans le matrice est : %d \n", max);
    return 0;
}