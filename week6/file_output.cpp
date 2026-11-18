#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
#include <vector>

void intersection_vector(const std::vector<std::string>& vin1, const std::vector<std::string>& vin2, std::vector<std::string>& vout){
    for(int i=0; i<vin1.size(); i++){
        for(int j=0; j<vin2.size(); i++){
            if(vin1[i]==vin2[j]){
                vout.push_back(vin2[j])
            }
        }
    }
}
void intersection_vector(const std::vector<std::string>& vin1, const std::vector<std::string>& vin2, std::vector<std::string>& vout){
    for(int i=0; i<vin1.size(); i++){
        vout.push_back(vin1[i])
    }
    for(int j=0; j<vin2.size(); i++){
        for(int k=0; j<vin1.size(); i++){
            if(!vin2[j]==vin1[k]){
                vout.push_back(vin2[j])
            }
    }
}


int main(){
    std::ifstream infile1;
    infile1.open(warehouse1.txt);
    std::ifstream infile2;
    infile2.open(warehouse2.txt);
    std::ofstream outfile1;
    outfile1.open(union.txt);
    std::ofstream outfile2;
    outfile2.open(intersection.txt);

    if(!infile1.is_open()){ 
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
    }

    if(!infile2.is_open()){ 
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
    }

    if(!outfile1.is_open()){
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
    }

    if(!outfile2.is_open()){
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
    }



    std::vector<std::string> vin1;
    std::vector<std::string> vin2;
    std::vector<std::string> vout_u;
    std::vector<std::string> vout_i;

    std::string tmp1;
    std::string tmp2;
    

    while(infile1 >> tmp1){
        vin1.push_back(tmp1);
    }

    while(infile2 >> tmp2){
        vin2.push_back(tmp2);
    }
    
    union_vector(vin1, vin2, vout_u);

    for(int i=0; i<vout_u.size(); i++){
        outfile1 << vout_u[i] << std::endl;
    }

    intersection_vector(vin1, vin2, vout_i);

    for(int j=0; j<vout_i.size(); j++){
        outfile2 << vout_i[j] << std::endl;
    }

    infile1.close()
    infile2.close()
    outfile1.close()
    outfile2.close()


}