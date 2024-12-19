#include <stdio.h>

int main()
{

    int pswr;
    int pass= 1234;
    do
    {
        printf("enter le mode de pass ");
        scanf("%d", &pswr);
    } while (pswr!=pass);
    
}