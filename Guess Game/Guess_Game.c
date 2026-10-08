/*
Problem : Write a program to generate a random number between 1 and 100 and ask user to guess it. Display Too High, Too Low, or Correct Guess untill the correct number is guessed.

*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));  // sets a new seed for each program run

    int secret_number = rand()%100 + 1;   // secret number between 1 and 100
    int guessed_number;

    do
    {
        printf("Guess the number: ");
        scanf("%d", &guessed_number);

        if (guessed_number > secret_number)
        {
            printf("too High!! \n");
        }
        else if (guessed_number < secret_number)
        {
            printf("Too Low!! \n");
        }
        else
        {
            printf("Congratulations, Correct Guess!! \n");
        }

    } while (guessed_number != secret_number);

    return 0;
}