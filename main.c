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
  printf("I have thought of a number between 1 and 10... Enter your guess\n");
  

  do 
    {
      scanf("%d", &guess);

      if (guess < number)
      {
        printf("Nope, go higher\n");
      }

      else if (number > guess)
      {
        printf("Nope, go lower\n");
      }

      else 
      
        printf("Nice, you guessed the correct answer!");
  
    } while (guess != number);
}