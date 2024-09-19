#include <iostream>

using namespace std;

// Method overloading with different number of arguments
int add(int a, int b) {
    return a + b;  // Error 1: Missing semicolon or brace (depending on location)
)

int add(int a, int b, int c)  // Error 2: Missing opening curly brace {
    return a + b + c  // Error 3: Missing semicolon

// Method overloading with different data types
double add(double a, double b) {
    return a + b;
}

int main() {
    int x = 5, y = 10, z = 15;
    double x1 = 2.5, y1 = 3.7;

    cout << "Sum of two integers: " << add(x, y) << endl  // Error 4: Missing semicolon
    cout << "Sum of three integers: " << add(x, y z) << endl;  // Error 5: Missing comma between arguments
    cout << "Sum of two doubles: " << add(x1 y1) << endl;  // Error 6: Missing comma between arguments

    return 0;
}