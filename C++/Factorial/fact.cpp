#include <iostream>

using namespace std;

int factorial(int n); // Function declaration

int main() {
    int value;

    cout << "Enter any number: ";
    cin >> value;

    int fact = factorial(value);
    cout << "Factorial of " << value << " is: " << fact << endl;

    return 0;
}

int factorial(int n) {
    if (n < 0) {
        return -1; // Indicate an error
    } else if (n == 0) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}
