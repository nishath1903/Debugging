#include <stdio.h>

int main() {
    int num, reversed = 0, original;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;

    while (num != 0) {
        int digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }

    if (original == reversed) {
        printf("%d is a palindrome number.\n", original);
    } else {
        printf("%d is not a palindrome number.\n", original);
    }

    return 0;
}
