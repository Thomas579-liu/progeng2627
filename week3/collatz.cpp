#include <iostream>

int main(){
    int n, max=0, steps=0;
    std::cout << "Please enter a number " << std::endl;
    std::cin >> n;
    while(n != 1){
        if(n>max){
            max = n;
        }
        if((n%2) != 0){
            n = 3*n +1;
            std::cout << n <<std::endl;
            steps = steps + 1;
        }
        else{
            n = n/2;
            std::cout << n <<std::endl;
            steps = steps + 1;
        }
    }
    std::cout << "The maximum is " << max << " and the step to get to 1 is " << steps << std::endl;
}