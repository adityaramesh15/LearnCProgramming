#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[]) {
    srand(time(NULL));
    int value = rand() % 20;

    int guess;
    int guesses = 0;

    

    while(guesses < 5) {
        printf("What is your guess?   ");
        scanf("%d", &guess);

        if (guess > 20 || guess < 0) {
            printf("Guess is not within nbounds of 0 to 20!\n");
        } else if (guess == value) {
            printf("You guessed the right answer!\n");
            break;
        } else if (guess < value) {
            printf("Guess was too low!\n");
        } else {
            printf("Guess was too high!\n");
        }

        guesses++;
    }

    if (guesses >= 5) {
        printf("You ran out of guesses :( \n");
    }



    return 0;
}