#include <iostream>

int main(){
    int n, result=1;
    std::cin >> n;
    for(int i=1; i<(n+1); i++){
        result = result*i;
    }
    std::cout << n << " factorial is " << result << std::endl;

}