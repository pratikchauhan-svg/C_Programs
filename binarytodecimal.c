#include <stdio.h>

int main() {
    long long binary;
    int decimal = 0, base = 1, remainder;
    
    printf("Enter a binary number: ");
    scanf("%lld", &binary);
    
    long long temp = binary;
    
    // Convert binary to decimal without pow()
    while (binary != 0) {
        remainder = binary % 10;
        binary = binary / 10;
        decimal += remainder * base;
        base = base * 2;  // Multiply base by 2 each time
    }
    
    printf("Binary: %lld\n", temp);
    printf("Decimal: %d\n", decimal);
    
    return 0;
}