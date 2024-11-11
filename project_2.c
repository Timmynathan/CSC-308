//C program to input scores for three subjects (SC 201, CSC 205, and STA 205)
#include <stdio.h>

int main() {
    float sc201, csc205, sta205;
    float total, average, percentage;

    // Input scores for each subject
    printf("Enter marks for SC 201: ");
    scanf("%f", &sc201);

    printf("Enter marks for CSC 205: ");
    scanf("%f", &csc205);

    printf("Enter marks for STA 205: ");
    scanf("%f", &sta205);

    // Calculate total, average, and percentage
    total = sc201 + csc205 + sta205;
    average = total / 3;
    percentage = (total / 300) * 100; // assuming each subject is out of 100

    // Display results
    printf("Total Marks: %.2f\n", total);
    printf("Average Marks: %.2f\n", average);
    printf("Percentage: %.2f%%\n", percentage);

    return 0;
}
