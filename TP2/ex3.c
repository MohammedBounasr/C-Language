#include <stdio.h>
int main()
{

   int N;
   printf("enter le nombre des case de tableau");
   scanf("%i", &N);
   int tab[N];
   int summ = 0;
   for (int i = 0; i < N; i++)
   {
      printf("enter le element : %i \n", i + 1);
      scanf("%i", &tab[i]);
      summ += tab[i]; //  summ = sum + tab[i];
   }
   printf("la somme des elements est : %i\n", summ);
   printf("le moyent de element est : %i \n", summ / N);
   return 0;
}
