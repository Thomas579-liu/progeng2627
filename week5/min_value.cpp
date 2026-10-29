#include <iostream>
#include <vector>

int min_vector_element(const std::vector<double>& vin){
    if (vin.size()==0){
        return -1;
    }
    int min=0;
    for(int i=0; i<vin.size()-1; i++){
        if(vin[i]<vin[i+1]){
            min = i;
        }
        else{
            min = i+1
        }
    }
    return min;
}

int main(){
    std::vector<double> v;
    v.push_back(13);
    v.push_back(6);
    v.push_back(7);
    v.push_back(0.9);
    std::cout << min_vector_element(v);
}