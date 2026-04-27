#include <stdio.h>

int main() {
    int secret = 42;
    int guess;

    printf("Guess the number (1 to 100): ");

    do {
        scanf("%d", &guess);

        if (guess > secret)
            printf("Too high! Try again: ");
        else if (guess < secret)
            printf("Too low! Try again: ");
        else
            printf("Correct! You guessed it.\n");

    } while (guess != secret);

    return 0;
}
