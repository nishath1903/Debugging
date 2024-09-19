#include <iostream>

using namespace std;

int main() {
    int num1, num2;

    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    cout << "\nBefore swapping:\n";
    cout << "Number 1: " << num1 << endl;
    cout << "Number 2: " << num2 << endl;

    // Swapping using XOR operation
    num1 ^= num2;
    num2 ^= num1;
    num1 ^= num2;

    cout << "\nAfter swapping:\n";
    cout << "Number 1: " << num1 << endl;
    cout << "Number 2: " << num2 << endl;

    return 0;
}
