#include <iostream>
#include <vector>

int search_vector_element(const std::vector<double>& vin, int n){
    if (vin.size()==0){
        return -1;
    }
    for(int i=0; i<vin.size(); i++){
        if(vin[i]==n){
            return i;
        }
    }
    return -1;
}

int main(){
    std::vector<double> v;
    v.push_back(13);
    v.push_back(6);
    v.push_back(7);
    v.push_back(0.9);
    std::cout << search_vector_element(v, 13);
}