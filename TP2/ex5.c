#include <stdio.h>

int main()
{

    int n;
    printf("enter the lenght of the array  : ");
    scanf("%d", &n);
    
    int tab[n];
    int x = 5;
    int j = 0;

    for (int i = 0; i < n; i++)
    {
        printf("enter  the element %i \n", i + 1);
        scanf("%d", &tab[i]);

        if (tab[i] == x)
        {
            j++;
        }
    }
    printf("%d appears in the array %d times\n", x, j);

    return 0;
}
