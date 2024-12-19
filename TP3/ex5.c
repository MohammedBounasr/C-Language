#include <stdio.h>
int multi(int x)
{
    int p;
    for (int i = 0; i <= 10; i++)
    {
       p= x*i;
       printf("%d \n",p);
    }
    

    return p;
}

int main()
{
    int n;
    printf("enter un nomber\n ");
    scanf("%d", &n);
    multi(n);

    return 0;
}
