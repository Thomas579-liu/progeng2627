#include <iostream>

int main(){
    double height, mass, bmi;
    std::cout << "What is your height in m" << std::endl;
    std::cin >> height;
    std::cout << "What is your weight in kg" << std::endl;
    std::cin >> mass;
    bmi = mass/(height*height);
    std::cout << "Your bmi is " << bmi << std::endl;
}