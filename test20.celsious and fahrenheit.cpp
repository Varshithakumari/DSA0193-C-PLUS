#include <iostream>
#include <vector>
std::vector<double> convertToFahrenheit(const std::vector<double>& celsiusValues) {
    std::vector<double> fahrenheitValues;
    for (double celsius : celsiusValues) {
        double fahrenheit = (celsius * 9.0 / 5.0) + 32;
        fahrenheitValues.push_back(fahrenheit);
    }
    return fahrenheitValues;
}
int main() {
    std::vector<double> celsiusValues = {0.0, 20.0, 37.0, 100.0};
    std::vector<double> fahrenheitValues = convertToFahrenheit(celsiusValues);
    std::cout << "Celsius to Fahrenheit conversion:" << std::endl;
    for (size_t i = 0; i < celsiusValues.size(); ++i) {
        std::cout << celsiusValues[i] << "°C = " << fahrenheitValues[i] << "°F" << std::endl;
    }
    return 0;
}
