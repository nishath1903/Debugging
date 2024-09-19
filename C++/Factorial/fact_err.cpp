#include <iostream>

using namespace std

int factorial(int, n); // error: put ','between int to n

int main() {
    int value;

    cout << "Enter any number: ";
    cin >> value;

    int fact = factorial(value);
    cout << "Factorial of " << value << " is: " << fact << endl;

    return 0;
}

int factoria1(int n) { //  error: '1' instead of 'l'
    if (n < 0) {
        return -1 // error:  missing semicolon
    } else if (n = 0) { //  error: '==' instead of '='
        return 1 // error:  missing semicolon
    } else {
        return n ** factorial(n - 1); //  error:  '**' instead of '*'
    )
    // error:  ')' instead of '}'
} 
} //  error:  Put extra closing Brace