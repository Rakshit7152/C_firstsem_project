#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    int num, guess;

    srand(time(0)); // random

    num = rand() % 10 + 1;

    printf("Guess the number (1 to 10): ");

    while(1) {

        scanf("%d", &guess);

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
