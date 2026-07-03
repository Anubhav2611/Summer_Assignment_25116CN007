#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int secret, guess, tries = 0;

    srand(time(0));
    secret = rand() % 100 + 1;

    printf("Guess the number between 1 and 100\n");

    do
    {
        printf("Enter your guess: ");
        scanf("%d", &guess);

        tries++;

        if(guess > secret)
        {
            printf("Too high! Try again.\n");
        }
        else if(guess < secret)
        {
            printf("Too low! Try again.\n");
        }
        else
        {
            printf("Correct! You guessed it in %d attempts.\n", tries);
        }

    } while(guess != secret);

    return 0;
}