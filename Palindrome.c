#include <stdio.h>

int main() {
    int n, reversed = 0, temp;

    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;

    while(temp) {
        reversed = reversed * 10 + temp % 10;
        temp /= 10;
    }

    if(reversed == n)
        printf("Palindrome");
    else
        printf("Not a palindrome");

    return 0;
}