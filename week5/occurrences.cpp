#include <iostream>
#include <vector>

int main(){
    std::vector<int>s;
    int n, temp, c, counter=0;
    std::cin >> n;
    for(int i=0; i<n; i++){
        std::cout << "enter a number:"<<std::endl;
        std::cin >> temp;
        s.push_back(temp);
    }
    std::cout << "enter a number to compare:"<<std::endl;
    std::cin >> c;
    for(int i=0; i<n; i++){
        if(s[i]==c){
            counter = counter +1;
            std::cout << i;
        }
    }
    std::cout << c << "appeared" << counter << std::endl;
}