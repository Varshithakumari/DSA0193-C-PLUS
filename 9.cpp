#include <iostream>
#include <cmath>  
using namespace std;

int main() {
    float num;

    cout << "Enter a floating-point number: ";
    cin >> num;

    int roundedDown = floor(num);
    int roundedUp = ceil(num);

    cout << "Number: " << num << endl;
    cout << "Rounded down (floor): " << roundedDown << endl;
    cout << "Rounded up (ceil): " << roundedUp << endl;

    return 0;
}
