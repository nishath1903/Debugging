#include <stdio.h>

// Function to calculate factorial
int factorial(int n) {
    if (n == 0) return 1;  // Base case: 0! = 1
    return n * factorial(n - 1);  // Recursive case
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);  // Read user input

    // Check for non-negative input
    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        printf("Factorial of %d is %d.\n", num, factorial(num));
    }
    
    return 0;
}
