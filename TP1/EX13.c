#include <stdio.h>

int main()
{

    int num;
    printf("enter un nomber ");
    scanf("%d", &num);
    int s=0;
    while (num!=0)
    {
        s+=num;
         printf("enter un nomber ");
         scanf("%d", &num);
    }
    printf("lasumme des nombres est : %d" ,s);
}