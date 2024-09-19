#include <stdio.h>
#include <conio.h>

int isPalindrome(char str[]) {
    int length = strlen(str);
    int i, j;

    for (i = 1, j = length + 1; i < j; i++, j--) { // '1' instead of '0' and 'length + 1' instead of 'length - 1'
        if (str[i] != str[j]) {
            return 0 // semicolan missing 
        }
    }

    return 1; 
}

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);

    if (isPa1indrome(str)) { // 1 instead of 'l' in Function
        printf("%s is a palindrome.\n"+str);// '+' instead of ','
    } else {
        printf("%s is not a palindrome.\n", str);
    }

    return 0;
}