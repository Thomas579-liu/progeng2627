#include <iostream>

int factorial(int n){
    int result=1;
    for(int i=1; i<n+1; i++){
        result = result*i;
    }
    return result;
}
int main(){
    int n;
    std::cout << "please enter a number" << std::endl;
    std::cin >> n;
    std::cout << "factorial of " << n << ": " << factorial(n) << std::endl;
}