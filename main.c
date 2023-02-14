#include <stdio.h>
#include <time.h>
#include <stdlib.h>



int main()
{
  int number;
  int guess;

  srand(time(NULL));
  number = rand() % 10;

  printf("Welcome to Guess the Number!\n");
  printf("I have thought of a number... Enter your guess\n");
  scanf("%d\n", &guess);
}