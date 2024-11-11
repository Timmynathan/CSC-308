#include <stdio.h>

int main() {
    char choice;
    printf("Enter the type of input (c for character, i for integer, f for float): ");
    scanf(" %c", &choice);

    switch (choice) {
        case 'c': {
            char ch;
            printf("Enter a character: ");
            scanf(" %c", &ch);

            printf("\nNext four characters:\n");
            for (int i = 1; i <= 4; i++) {
                printf("%c ", ch + i);
            }
            printf("\nASCII code of '%c' is %d\n", ch, ch);
            printf("Size of character: %lu byte(s)\n", sizeof(ch));
            break;
        }
        case 'i': {
            int num;
            printf("Enter an integer: ");
            scanf("%d", &num);

            printf("\nNext four integers in multiples of 3:\n");
            for (int i = 1; i <= 4; i++) {
                printf("%d ", num + i * 3);
            }
            printf("\nSize of integer: %lu byte(s)\n", sizeof(num));
            break;
        }
        case 'f': {
            float fnum;
            printf("Enter a float: ");
            scanf("%f", &fnum);

            printf("\nNext four floats (incremented by 3.0 each):\n");
            for (int i = 1; i <= 4; i++) {
                printf("%.2f ", fnum + i * 3.0);
            }
            printf("\nSize of float: %lu byte(s)\n", sizeof(fnum));
            break;
        }
        default:
            printf("Invalid input type!\n");
            break;
    }

    return 0;
}
