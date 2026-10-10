#include <iostream>
#include <string>

int main(){
    std::string firstname;
    std::string surname;
    std::cout << "What is your firstname?" << std::endl;
    std::cin >> firstname;
    std::cout << "What is your surname?" << std::endl;
    std::cin >> surname;
    std::cout << "Hello, " + firstname + " " + surname << std::endl;
}