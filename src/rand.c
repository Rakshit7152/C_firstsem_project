#include <stdio.h>
#include <stdlib.h> // Still needed for rand()
#include "random.h" // Include the new header for initialization

int main() {
    int num, guess;

    // Initialize the random number generator by calling the function
    // defined in random_seeder.c (via random_seeder.h).
    initialize_rng_seed();

    // Generate the random number (1 to 10)
    // We no longer call srand directly here.
    num = rand() % 10 + 1;

    printf("Guess the number (1 to 10): ");

    while(1) {
        // Check for successful read to avoid infinite loops on non-integer input
        if (scanf("%d", &guess) != 1) {
            printf("Invalid input. Please enter a number: ");
            // Clear the input buffer
            while (getchar() != '\n');
            continue;
        }

        if(guess == num){
            printf("You got it!!\n");
            break;
        }
        else if(guess < num){
            printf("low.. try again: ");
        }
        else{
            printf("high.. try again: ");
        }
    }

    return 0;
}