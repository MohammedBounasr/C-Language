#include <stdio.h>
int cmp(int x , int y)
{
if (x>y)
{
    printf("%d est sup a %d \n " , x ,y);
}
else
{
   printf("%d est sup a %d \n " , y ,x);
}
}



int main()
{
    int n , m;
    printf("enter un nomber\n ");
    scanf("%d", &n);
    printf("enter un nomber\n ");
    scanf("%d", &m);
    cmp(n,m);

    return 0;
}