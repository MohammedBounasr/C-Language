#include <stdio.h>
int pair_impair(int x)
{
    int p;
if (x%2==0)
{
    p =1;

}
else
{
   p =0;
}



    return p;
}

int main()
{
    int n;
    printf("enter un nomber\n ");
    scanf("%d", &n);
    printf(" %d", pair_impair (n));

    return 0;
}