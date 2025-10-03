#include <stdio.h>

int main() {
    // Print Name & Roll No
    printf("Pratik Chauhan\n");
    printf("Roll No. 042\n\n");

    int n, i, j;

    printf("Enter number of rows for upper half: ");
    scanf("%d", &n);

    // Upper pyramid
    for (i = 1; i <= n; i++) {
        // spaces
        for (j = 1; j <= n - i; j++) {
            printf(" ");
        }
        // stars
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    // Lower inverted pyramid
    for (i = n - 1; i >= 1; i--) {
        // spaces
        for (j = 1; j <= n - i; j++) {
            printf(" ");
        }
        // stars
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}