#include <stdio.h>

int premier(int x)
{
    int p;
    if (x < 2) // negative number et 1 sont pas premiere
    {
        return 0; // that means the function returns false to {the main function} and stops running
    }
    if (x == 2) // 2 is the only even prime number
    {
        return 1;
    }
    for (int i =2; i < x; i++)
    {
        if (x % i == 0)
        {
            return 0; // that means the function returns false to {the main function} and stops running
        }
    }

    return 1; // that means the function returns true to {the main function} and stops running and the conditions above didnt exucuted
}

int main()
{
    int n;
    printf("enter un nomber :\n ");
    scanf("%d", &n);
    if (premier(n)) // that means if the condition is true (the function{ premier} returns 1),it exucuted the block inside
    {
        printf(" %d est premier ", n);
    }
    else // that means if the condition is false (the function{ premier} returns 0),it exucuted the block inside
    {
        printf(" %d nest pas premier ", n);
    }

    return 0;
}