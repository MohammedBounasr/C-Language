#include <stdio.h>

int main()
{

    int pswr;
    int pass= 1234;
    repeat :
        printf("enter le mode de pass ");
        scanf("%d", &pswr);
   if (pswr!=pass)
   {
    goto repeat ;
   }
   
    
}