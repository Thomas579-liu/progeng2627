#include <iostream>
#include <string>

int main(){
    double temp_in, temp_out;
    std::string in_unit, out_unit;

    std::cin >> temp_in >> in_unit;

    if (in_unit == "C"){
        out_unit = "F";
        temp_out = (temp_in*9)/5 + 32;
    }
    else if (in_unit == "F"){
        out_unit = "C";
        temp_out = ((temp_in - 32)*5)/9;
    }
    else{
        std::cout << "Not a valid input" << std::endl;
    }
    std::cout << temp_out << out_unit << std::endl;
}