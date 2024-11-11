#include <stdio.h>

int main() {
    int experience, age;
    long salary;

    // Prompt for experience input (1 for experienced, 0 for inexperienced)
    printf("Enter experience (1 for experienced, 0 for inexperienced): ");
    scanf("%d", &experience);

    // Prompt for age input
    printf("Enter age: ");
    scanf("%d", &age);

    // Determine salary based on experience and age
    if (experience == 1) { // Experienced
        if (age >= 40) {
            salary = 560000;
        } else if (age >= 30 && age < 40) {
            salary = 480000;
        } else if (age < 28) {
            salary = 300000;
        } else {
            salary = 100000; // Default for ages not specified
        }
    } else { // Inexperienced
        salary = 100000;
    }

    // Print the salary
    printf("The salary is: ₦%ld\n", salary);

    return 0;
}
