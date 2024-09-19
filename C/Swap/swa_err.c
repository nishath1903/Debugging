#include <stdio.h>

int main() {
    int a, b, temp;

    printf("Enter first number: ");
    scanf("%d", &a)  // Error 1: Missing semicolon

    printf("Enter second number: ");
    scanf("%d" &b);  // Error 2: Missing comma in scanf

    // Display numbers before swapping
    printf("Before swapping: a = %d, b = %d\n", a, b);

    // Swapping process
    temp = a;
    a += b; // Error 3 syntex erro  '+=' instead of '+'
    b = temp  // Error 4: Missing semicolon

    // Display numbers after swapping
    printf("After swapping: a = %d, b = %d\n"}  // Error 5: Missing closing parenthesis, '}' instead of ')'
    return 0;  // Error 6: Missing semicolon

    } // Error 7: Extra closing brace
}
