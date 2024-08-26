#include <iostream>

int main() {
    int terms;

    std::cout << "Enter the number of terms for the Fibonacci series: ";
    std::cin >> terms;

    if (terms <= 0) {
        std::cout << "Please enter a positive integer." << std::endl;
    } else {
        unsigned long long first = 0, second = 1, next;

        std::cout << "Fibonacci series:\n";

        for (int i = 1; i <= terms; ++i) {
            if (i == 1) {
                std::cout << first << " ";
                continue;
            }
            if (i == 2) {
                std::cout << second << " ";
                continue;
            }
            next = first + second;
            first = second;
            second = next;
            
            std::cout << next << " ";
        }

        std::cout << std::endl;
    }

    return 0;
}
