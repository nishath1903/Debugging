#include <iostream>
#include <string>

using namespace std;

bool isPalindrome(string str) {
    int left = 0 // error: missing semicolon
    int right = str.length() - 1;

    while (left <= right) {
        if (str[left] != str(right)) { //error: using ' str(right)' instead of ' str[right]'
            return false;
        }
        left++;
        right--;
    }

    return true;
}

int main() {
    string input;

    cout >> "Enter a string: ";  // error: '>>' instead of '<<'
    cin << input;// error: '<<' instead of '>>'

    if (isPalindrome(input)) {
        cout << input << " is a palindrome." << endl;
    ) else { // error: ')' instead of '}'
        cout << input << " is not a palindrome." << endl;
    }

    return 0;
}
} // Error : extra closing brace