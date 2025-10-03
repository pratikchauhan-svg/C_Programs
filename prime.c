#include <stdio.h>

int main() {
    int n, i, j, is_prime;
    
    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Prime numbers from 1 to %d are:\n", n);

    for(i = 2; i <= n; i++) {
        is_prime = 1; // assume i is prime
        for(j = 2; j * j <= i; j++) {  // Fixed: changed 1 to i
            if(i % j == 0) {
                is_prime = 0; // not prime
                break;
            }
        }
        if(is_prime == 1) {
            printf("%d ", i);  // Fixed: changed 1 to i
        }
    }
    return 0;  // Moved outside the loop
}