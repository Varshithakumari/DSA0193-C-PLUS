#include <iostream>
#include <algorithm>
#include <string>
int main() {
    std::string str = "Good";
    std::string upperStr = str;
    std::transform(upperStr.begin(), upperStr.end(), upperStr.begin(), ::toupper);
    std::string lowerStr = str;
    std::transform(lowerStr.begin(), lowerStr.end(), lowerStr.begin(), ::tolower);
    std::string reverseStr = str;
    std::reverse(reverseStr.begin(), reverseStr.end());
    std::cout << upperStr << std::endl;
    std::cout << lowerStr << std::endl;
    std::cout << reverseStr << std::endl;
    return 0;
}
