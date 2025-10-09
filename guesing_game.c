/*
NAME: WAIRIMU JOHN NDUATI
REG NO: PA106/G/29038/25
DESCRIPTION: PROGRAM FOR GUESING GAMME
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int secret, guess, tries = 0;

    srand(time(0));           
    secret = rand() % 20 + 1;

    printf("Number Guessing Game (1 to 20)\n");

    while(1) {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        tries++;

        if(guess > secret)
            printf("Too high!\n");
        else if(guess < secret)
            printf("Too low!\n");
        else {
            printf("Congratulations! You guessed it in %d tries.\n", tries);
            break;
        }
    }

    return 0;
}
