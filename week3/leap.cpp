#include <iostream>

int main(){
    int year;
    std::cout << "What is the year" << std::endl;
    std::cin >> year;
    if (year%4 == 0){
        if (year%100 == 0){
            if (year%400 == 0 ){
                std::cout << "It is a century leap year" << std::endl;
            }
            else{
                std::cout << "It is not a leap year" << std::endl;
            }
        }
        else{
            std::cout << "It is a leap year" << std::endl;
        }
    }
    else{
        std::cout << "It is not a leap year" << std::endl;
    }
}