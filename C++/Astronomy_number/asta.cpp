#include <iostream>
#include <cmath>
using namespace std;

bool isArmstrong(int number) {
    int originalNumber, remainder, result = 0, n = 0;
    originalNumber = number;

    // Calculate the number of digits
    while (originalNumber != 0) {
        originalNumber /= 10;
        ++n;
    }
    
    originalNumber = number;

    // Calculate the sum of the nth power of its digits
    while (originalNumber != 0) {
        remainder = originalNumber % 10;
        result += pow(remainder, n);
        originalNumber /= 10;
    }

    // Check if the sum is equal to the original number
    if(result == number)
        return true;
    else
        return false;
}
int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;
    
    if(isArmstrong(number))
        cout << number << " is an Armstrong number.";
    else
        cout << number << " is not an Armstrong number.";
        
    return 0;
}
