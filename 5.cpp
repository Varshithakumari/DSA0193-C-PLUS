#include <iostream>
#include <cmath>  
using namespace std;

int main() {
    float num1, num2;

    cout << "Enter two floating-point numbers: ";
    cin >> num1 >> num2;

    float sum = num1 + num2;
    float difference = num1 - num2;
    float product = num1 * num2;
    float quotient = num1 / num2;
    float remainder = fmod(num1, num2);  

    cout << "Addition: " << sum << endl;
    cout << "Subtraction: " << difference << endl;
    cout << "Multiplication: " << product << endl;
    cout << "Division: " << quotient << endl;
    cout << "Modulo: " << remainder << endl;

    return 0;
}
