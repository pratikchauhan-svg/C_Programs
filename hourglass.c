#include <stdio.h>

int main() {
    int n, i, j;
    
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    
    // Upper inverted pyramid
    for (i = n; i >= 1; i--) {
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
    
    // Lower normal pyramid
    for (i = 2; i <= n; i++) {
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