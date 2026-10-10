#include <iostream>

int main(){
    double celsius, fahrenheit;
    std::cout << "What is the temperature in celsius?" << std::endl;
    std::cin >> celsius;
    fahrenheit = celsius + 32;
    std::cout << "Fahrenheit temp is " << fahrenheit << std::endl;

}