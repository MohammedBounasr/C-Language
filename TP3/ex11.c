#include <stdio.h>
int cmp(int x , int y,int z)
{
    int max;
if (y>x && y>z)
{
    //printf("%d est le plus grand  \n " , y );
    max=y;
}
else if(z>x && z>y)
{
    //printf("%d est le plus grand  \n " , z );
    max=z;
} 
else
{
   //printf("%d est le plus grand  \n " , x );
   max=x;
}
return max;
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
    printf("%d est le plus grand  \n " , cmp(n,m,l) );
    //cmp(n,m,l);

    return 0;
}