#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int secret_number;
    int guess;
    int attempts = 0;

    srand(time(0));

    secret_number = rand() % 100 + 1;

    printf("=================================\n");
    printf("    SENTINEL NUMBER GUESSING     \n");
    printf("=================================\n");

    printf("I have selected a number between 1 and 100.\n");
    printf("Can you guess it?\n\n");

    while (1)
    {
        printf("Enter your guess: ");
        scanf("%d", &guess);

        attempts++;

        if (guess < secret_number)
        {
            printf("Too low! Try again.\n");
        }
        else if (guess > secret_number)
        {
            printf("Too high! Try again.\n");
        }
        else
        {
            printf("\nCongratulations! You guessed correctly!\n");
            printf("The number was %d.\n", secret_number);
            printf("You got it in %d attempts!\n", attempts);
            break;
        }
    }

    printf("\nThank you for playing Sentinel Number Guessing Game!\n");

    return 0;
}
