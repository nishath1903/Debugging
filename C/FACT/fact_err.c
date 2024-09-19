#include <stdio.h>

// Function to calculate factorial
int factorial(int n) {
    if (n == 0 return 1;  // Error 1: Missing closing parenthesis
    return n * factorial(n - 1)  
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d" &num);  // Error 2: Missing ',' between 'd' and 'num'

    // Check for non-negative input
    if (num <= 0) { // Error 3:  logical error '<=' instead of '<'
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        printf("Factorial of %d is %d\n", num, factoria1(num));  // Error 4: incorrect function name 'factoria1' instead of 'factorial'
    }
    
    return 0;  
}