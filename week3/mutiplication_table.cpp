#include <iostream>

int main(){
    int n;
    std::cin >> n;
    for(int i=1;i<(n+1);i++){
        for(int c=1;c<(n+1);c++){
            std::cout << c*i << "\t";
        }
        std::cout << std::endl;
    }
}