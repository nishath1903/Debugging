#include <iostream>

using namespace std;

int main() {
    int num1  num2;// missing comma ','

    cout << "Enter the first number: ";
    cin << num1; // error: "<<" instead of ">>"

    cout << "Enter the second number: ";
    cin >> num1; // error: variable name instead of 'num2','num1'

    cout << "\n Before swapping:\n";
    cout << "Number 1: " << num1 << endl;
    cout << "Number 2: " << num2 << endl;

    // Swapping using XOR operation
    num1 ^= num2;
    num2 ^= num1 // error: missing semicolon 
    num1 += num2; // error: '+=' instead of '='

    cout << "\nAfter swapping:\n";
    cout << "Number 1: " << numl << endl; // error: 'numl' insted of 'num1'
    cout << "Number 2: " << num2 << endl;

    return 0;
}