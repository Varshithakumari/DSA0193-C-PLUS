#include <iostream>

int main() {
    int age;
    const int votingAge = 18;
    std::cout << "Enter your age: ";
    std::cin >> age;
    if (age >= votingAge) {
        std::cout << "You are eligible to vote." << std::endl;
    } else {
        int yearsLeft = votingAge - age;
        std::cout << "You are not eligible to vote." << std::endl;
        std::cout << "You need to wait " << yearsLeft << " more year(s) to be eligible." << std::endl;
    }
    return 0;
}
