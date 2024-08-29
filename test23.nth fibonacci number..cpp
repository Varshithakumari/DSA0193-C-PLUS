#include <iostream>
int fibonacci(int n) {
    if (n <= 1)
        return n;
    int a = 0, b = 1, c;
    for (int i = 2; i <= n; ++i) {
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}
int main() {
    int n;
    std::cout << "Enter the position (N) of the Fibonacci number you want: ";
    std::cin >> n;

    int fibNumber = fibonacci(n);
    std::cout << "The " << n << "th Fibonacci number is: " << fibNumber << std::endl;
    return 0;
}
