#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
    int random, guess;
    int no_of_guess = 0;
    srand(time(NULL));
    printf("Welcome to the world of the Guessing Number..\n");
    random = rand() % 100 + 1;
    do {
        printf("Please enter your guess number (1 to 100): ");
        scanf("%d", &guess);
        no_of_guess++;
        if (guess < random) {
            printf("Guess a larger number.\n");
        }
        else if (guess > random) {
            printf("Guess a smaller number.\n");
        }
        else {
            printf("?? Congratulations! You guessed the number in %d attempts.\n", no_of_guess);
        }
    } while (guess != random);
    printf("Thanks for playing!\n");
    printf("Developed by: Rudra Pratap Singh\n");
    return 0;
}
