#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int randomNumber = 0;
    int guess = 0;
    int numOfGuesses = 5;
    time_t t;

    // initialize random number generator
    srand((unsigned) time(&t));

    // get the random number
    randomNumber = rand() % 21;

    printf("\nThis is a guessing game.");
    printf("\nThe correct answer is a number between 0 and 20. You have 5 guesses to get the correct answer\n");

    for (numOfGuesses = 5; numOfGuesses > 0 ; --numOfGuesses)
    {   

        // prompt user for a guess
        printf("\nYou have %d tr%s left.", numOfGuesses, numOfGuesses == 1 ? "y" : "ies");
        printf("\nEnter a guess: ");
        scanf("%d", &guess);

        // check guess against random number
        if (guess == randomNumber)
        {
            printf("\nCongratulations. You guessed it!\n");
            return 0;
        }
        
        // print hint if guess is wrong
        else if (guess < 0 || guess > 20)
            printf("I said the number is between 0 and 20.\n");
        else if (randomNumber > guess)
            printf("Sorry, %d is wrong. My number is greater than that.\n", guess);
        else if (randomNumber < guess)
            printf("Sorry, %d is wrong. My number is less than that.\n", guess);
    }

    return 0;
}

