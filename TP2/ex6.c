#include <stdio.h>

int main()
{
    int i;
    int x;
    int n;
    printf("enter le nombre de case de tableau ");
    scanf("%d", &n);
    int tab[n];

    // to fill the array
    for (i = 0; i < n; i++)
    {
        printf("enter  les element de tableau :%d ", i + 1);
        scanf("%d", &tab[i]);
    }

    // select the element your looking for
    printf("enter lelement  tu recherches\n ");
    scanf("%d", &x);

    // loop for searching
    int ext;
    for (i = 0; i < n; i++)
    {
        if (tab[i] == x)
        {
            printf("%d exist dans la position %d :", x, i + 1);
            break;
        }
        else
        {
            ext = 1;
        }
    }
    if (ext = 1)
    {
        printf("Nexiste pas");
    }

    return 0;
}
