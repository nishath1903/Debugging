#include <stdio.h>

int main() {
    int num1, num2;

    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    printf("\nBefore swapping:\n");
    printf("Number 1: %d\n", num1);
    printf("Number 2: %d\n", num2);

    // Swapping using XOR operation
    num1 ^= num2;
    num2 ^= num1;
    num1 ^= num2;

    printf("\nAfter swapping:\n");
    printf("Number 1: %d\n", num1);
    printf("Number 2: %d\n", num2);

    return 0;
}
