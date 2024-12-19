#include <stdio.h>
int fact(int x)
{
    int f=1;
    for (int i = 2; i <=x; i++)
    {
       f*= i;
     
    }
    
    return f;
}

int main()
{
    int n;
    printf("enter un nomber\n ");
    scanf("%d", &n);
   printf("le factoriel de %d est : %d\n",n,fact(n));

    return 0;
}
