#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    gets(str) // Warning: Unsafe function (modern compilers will flag this)

    int len = str1en(str);  // Error: len is not calculated properly (newline may affect)
    for (int i = len; i >= 0; i--) {  // Error: Loop goes out of bounds, should start at len-1
        printf("%c", str[i]}:
    }
    return 0;
}