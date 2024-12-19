#include <stdio.h>
int main()
{
    int N;
    printf("enter le nombre de case de tableau ");
    scanf("%d", &N);
    int tab[N];
    int i;

    for (i = 0; i < N; i++)
    {
        printf("entrer les element de tableau %d : ", i + 1);
        scanf("%d", &tab[i]);
    }
    printf("les elements de tableau sont:\n");
    for (i = 0; i < N; i++)
    {
        printf("%d \n", tab[i]);
        /*abdelkader.benzirar@gmail.com*/
    }

    return 0;
}
