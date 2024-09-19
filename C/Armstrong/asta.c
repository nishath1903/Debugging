#include <stdio.h>
#include <math.h>

int main() {
    int num, original, remainder, result = 0, n = 0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    original = num;

    // Count the number of digits
    while (original != 0) {
        original /= 10;
        ++n;
    }

    original = num;

    // Calculate the sum of the cubes of digits
    while (original != 0) {
        remainder = original % 10;
        result += pow(remainder, n);
        original /= 10;
    }

    // Check if the number is an Armstrong number
    if (result == num) {
        printf("%d is an Armstrong number.\n", num);
    } else {
        printf("%d is not an Armstrong number.\n", num);
    }

    return 0;
}
