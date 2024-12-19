#include <stdio.h>
float moy(int x , int y,int z)
{
    int s=0;
    s+=x+y+z;
    float moyen;
    moyen=(float)s/3;
    return moyen;
}
int main()
{
    int n , m ,l;
    printf("enter un nomber\n ");
    scanf("%d", &n);
    printf("enter un nomber\n ");
    scanf("%d", &m);
    printf("enter un nomber\n ");
    scanf("%d", &l);
    printf("le moyen de tes notes est : %.2f \n " , moy(n,m,l) );
    

    return 0;
}