#include <iostream>

int main(){
    int n;
    std::cin >> n;
    for(int i=0; i<n; i++){
        for(int c=0; c<n ; c++){
            std::cout << "*";
        }
        std::cout << std::endl;
    }
}