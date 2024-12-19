#include <stdio.h>

int main()
{
  int year;
  printf("enter your year of birth ");
  scanf("%d", &year);

  int age = 2024 - year;
  if (age >= 18 && age < 100)
  {
    printf("adult");
  }
  else if (age < 18 && age > 0)
  {
    printf("minor");
  }
  else
  {
    printf(" Either you are dead or not born yet");
  }

  return 0;
}