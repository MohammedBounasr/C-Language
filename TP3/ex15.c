#include <stdio.h>
int perfect(int x)
{
    int s = 0;
    for (int i = 1; i < x; i++)
    {
        if (x % i == 0)
        {
            s += i;
        }
    }

    if (s == x)
    {
        return 1; // that means the function returns true to {the main function} and stops running 
    }

    return 0;// that means the function returns false to {the main function} and stops running and the condition above didnt exucuted 
}

int main()
{
    int n;
    printf("enter un nomber\n ");
    scanf("%d", &n);
    if (perfect(n))// that means if the condition is true (the function{ perfect} returns 1),it exucuted the block inside
    {
        printf(" %d est un numbre perfect ", n);
    }
    else //that means if the condition is false (the function{ perfect} returns 0),it exucuted the block inside
    {
        printf(" %d nest pas  un numbre perfect ", n);
    }

    return 0;
}