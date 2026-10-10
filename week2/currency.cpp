#include <iostream>

int main(){
    double rate, pound, euro;
    std::cout << "What is the rate of conversion " << std::endl;
    std::cin >> rate;
    std::cout << "How much do you want to convert " << std::endl;
    std::cin >> pound;
    euro = pound*rate;
    std::cout << "You get " << euro << " euro"<< std::endl;

}