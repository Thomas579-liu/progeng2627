#include <iostream>

int main(){
    int n1, n2, result=0;

    std::cin >> n1 >> n2;
    std::cout << "We want to perform the integer division of " << n1 << " by " << n2 << std::endl;

    while (n1 >= n2) {
        result = result + 1;
        n1 = n1 - n2;
    }
    if (n1 == 0){
        std::cout << "It is divisible and the quotient is " << result << std::endl;

    }
    else{
        std::cout << "The quotient is " << result << " and the reminder is " << n1;
    }

}