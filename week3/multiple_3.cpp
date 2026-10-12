#include <iostream>

int main(){
    int n, rem;
    std::cout << "Which number to check?" << std::endl;
    std::cin >> n;
    rem = n%3;
    if (rem == 0){
        std::cout << "Your number is a multiple of 3" << std::endl;
    }
    else{
        std::cout << "Your number is not a multiple of 3" << std::endl;
    }

}
