#include <stdio.h>
int main()
{

   // to enter the size of the array
   int n;
   printf("enter le nombre de case de tableau");
   scanf("%d", &n);
   int tab[n];
   int i;

   // Input array elements
   for (i = 0; i < n; i++)
   {
      printf("enter  les element de tableau :%d ", i + 1);
      scanf("%d", &tab[i]);
   }

   // Initialize max with the first element
   int max;
   max = tab[0];

   // Loop through the array to find the maximum element
   for (i = 1; i < n; i++)
   {
      if (tab[i] > max)
      {
         max = tab[i];
      }
   }
   printf("le plus grand element dans le tableau est : %d \n", max);
   return 0;
}
