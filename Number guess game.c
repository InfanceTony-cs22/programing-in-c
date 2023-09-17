#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Seed the random number generator with the current time
    srand(time(NULL));

    // Generate a random number between 1 and 100
    int randomNumber = rand() % 100 + 1;
    
    int guess;
    int attempts = 0;
    
    printf("Welcome to the Guessing Game!\n");
    
    while (1) {
        printf("Enter your guess (1-100): ");
        scanf("%d", &guess);
        
        attempts++;
        
        if (guess < 1 || guess > 100) {
            printf("Please enter a number between 1 and 100.\n");
            continue;
        }
        
        if (guess < randomNumber) {
            printf("Too low! Try again.\n");
        } else if (guess > randomNumber) {
            printf("Too high! Try again.\n");
        } else {
            printf("Congratulations! You've guessed the number %d in %d attempts.\n", randomNumber, attempts);
            break;
        }
    }
    
    return 0;
}
