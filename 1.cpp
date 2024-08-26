#include <iostream>
using namespace std;

int main() {
    int num1, num2;

    cout << "Enter two integers: ";
    cin >> num1 >> num2;

    int sum = num1 + num2;
    int difference = num1 - num2;
    int product = num1 * num2;
    int quotient = num1 / num2;
    int remainder = num1 % num2;

    cout << "Addition: " << sum << endl;
    cout << "Subtraction: " << difference << endl;
    cout << "Multiplication: " << product << endl;
    cout << "Division: " << quotient << endl;
    cout << "Modulo: " << remainder << endl;

    return 0;
}
