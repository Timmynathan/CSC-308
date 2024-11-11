//Eligiblefor Voting Age Checker
#include <stdio.h>

int main() {
    int age;

    // Ask the user to input their age
    printf("Enter your age: ");
    scanf("%d", &age);

    // Check if the age is greater than or equal to 18
    if (age >= 18) {
        printf("You can vote.\n");
    } else {
        printf("You cannot vote.\n");
    }

    return 0;
}
