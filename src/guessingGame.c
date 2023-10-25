/**
 * Author: Hifza Nazir
 * Date: 2023/10/22
 * This program plays a guessing game with the user.
 * It selects a random number between 1 and 1000 and
 * prompts the user to guess the value, informing them
 * of whether or not it is higher or lower than the
 * actual value.  Once the user guesses correctly, the
 * game ends and the number of guesses is displayed.
 * 
 */
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main(int argc, char **argv) {

  // the game will be played by creating a random
  // number between 1 and 1000
  int n = 1000;

  // seed the random number generator
  srand(time(NULL));
  // the program generates a random number between 1 and 1000
  // the user will try to guess what this number is
  int number = (rand() % n) + 1;

  // initialize the user's "guess" to be an invalid value
  int guess = -10;
  int numGuesses = 0;

  printf("Guess-A-Number Game!\n");
  printf("Enter a number between 1 and %d\n", n);

  //TODO: place your code here
  // using do while loop
  do
  {
    // prompt the guess from user
    scanf("%d",&guess);

    // using if else condition (defining range between 1 and 1000)
    if(guess<1 || guess > 1000  )
    {
      printf("Invalid input please try again!\n");
    }

    //in else condition increment on guess number.
    else
    {
      numGuesses++;

      //using if else if condition (guess greater or less then number then try again )
      if(guess>number)
      {
        printf("too higher! try agian\n");

      }
      else if(guess<number)
      {
        printf("too low! try again\n");
      }
    }

      // while condition for terminating the loop
    } while(guess != number);
  
  //display the guess number.
  printf("Congratulations, you found it!  Number of guesses: %d\n", numGuesses);

   return 0;
}
