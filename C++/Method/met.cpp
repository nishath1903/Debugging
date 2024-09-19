#include <iostream>

using namespace std;

// Method overloading with different number of arguments
int add(int a, int b) {
    return a + b;
}

int add(int a, int b, int c) {
    return a + b + c;
}

// Method overloading with different data types
double add(double a, double b) {
    return a + b;
}

int main() {
    int x = 5, y = 10, z = 15;
    double x1 = 2.5, y1 = 3.7;

    cout << "Sum of two integers: " << add(x, y) << endl;
    cout << "Sum of three integers: " << add(x, y, z) << endl;
    cout << "Sum of two doubles: " << add(x1, y1) << endl;

    return 0;
}
