#include <stdio.h>
#include <stdbool.h>
int main()
{
    int number;
    printf("enter un nomber ");
    scanf("%d", &number);
    bool chek = false;
    if (number < 2)// negative number et 1 sont pas premiere
    {
        printf("Le nombre %d n'est pas un nombre premier.\n", number);
        return 0; // pour sourtie 
    }
     if (number== 2) // 2 is the only even prime number
    {
       printf(" le numbre  %d est premiere  ", number);  
       return 0; // pour sourtie 
    
    }
    
    for (int i = 2; i < number; i++)
    {
        if (number % i == 0)
        {
            chek = true;
            break;
        }
    }
    if (chek==false )// or !chek
    {
      printf(" le numbre  %d est premiere  ", number);  
    }
    else
    {
      printf(" le numbre  %d nest pas premiere  ", number);
    }
    
    

    return 0;
}