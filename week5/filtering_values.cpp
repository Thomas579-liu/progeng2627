#include <iostream>
#include <vector>

int main(){
    std::vector<int>s;
    int n, temp, c;
    std::cin >> n;
    for(int i=0; i<n; i++){
        std::cout << "enter a number:"<<std::endl;
        std::cin >> temp;
        s.push_back(temp);
    }
    std::cout << "enter a number to compare:"<<std::endl;
    std::cin >> c;
    for(int i=0; i<n; i++){
        if(s[i]<c){
            std::cout << s[i] << std::endl;
        }
    }
}