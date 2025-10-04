#include <stdio.h>

int main() {


    int a, b, choice;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Choose operation:\n");
    printf("1. Add\n");
    printf("2. Subtract\n");
    printf("3. Multiply\n");
    printf("4. Divide\n");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Result = %d\n", a + b);
            break;
        case 2:
            printf("Result = %d\n", a - b);
            break;
        case 3:
            printf("Result = %d\n", a * b);
            break;
        case 4:
            if (b != 0)
                printf("Result = %d\n", a / b);
            else
                printf("Error! Division by zero.\n");
            break;
        default:
            printf("Invalid choice!\n");
    }

    return 0;
}