#include <iostream>

int main() {
    int number;

    std::cout << "Enter an integer: ";
    std::cin >> number;

    std::string result = (number % 3 == 0) ? "Divisible by 3" : "Not divisible by 3";

    std::cout << result << std::endl;

    return 0;
}
