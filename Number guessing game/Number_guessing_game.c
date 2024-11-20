#include <stdio.h>
#include <stdlib.h> // consists rand() function
#include <time.h> // tells us time

int main() {
    // Seed the random number generator
    srand(time(0));

    // Generate a random number between 1 and 100
    int randomNumber = (rand() % 100) + 1;
    int no_of_guesses =0;
    int guessed_number;

    // Print the random number
    // printf("Random Number: %d\n", randomNumber);
    
    do {
    printf("Guess the number");
    scanf("%d",&guessed_number);
    if (guessed_number>randomNumber){
        printf("Lower number please!\n");
    }
    else if (guessed_number<randomNumber){
        printf("Higher number please!\n");
    }
    else {
        printf("Congrats!!\n");
    }
    no_of_guesses++;
    } while (guessed_number!=randomNumber);

    printf("You guessed the number in %d guesses",no_of_guesses);

    return 0;
}