//c program to take a character between 'A' and 'J' as input and prints the next 6 characters
#include <stdio.h>

int main() {
    char input;
    
    // Prompt the user for input
    printf("Enter a character between A and J: ");
    scanf(" %c", &input);
    
    // Check if input is within the valid range
    if (input >= 'A' && input <= 'J') {
        printf("Next 6 characters are: ");
        
        // Print the next 6 characters
        for (int i = 1; i <= 6; i++) {
            printf("%c ", input + i);
        }
        
        printf("\n");
    } else {
        printf("Invalid input. Please enter a character between A and J.\n");
    }

    return 0;
}
