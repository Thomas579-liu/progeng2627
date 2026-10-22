#include <iostream>

bool is_prime(int n){
    for(int i=2; i<n; i++){
        if ((n%i) == 0){
            return false;
        }
    }
    return true;
}

int smallest_factor(int n){
    for(int cf = 2; cf < n; cf++){
        if( (n % cf) == 0){
            if (is_prime(cf)){
                return cf;
            }
        }
    }
    return 0;
}

int main(){
    int n;
    std::cin >> n;
    std::cout << smallest_factor(n) << std::endl;
}