#include <iostream>
#include <cmath>

int main(){
    int row, col, new_row, new_col;
    bool valid=false;
    std::cin >> row >> col;
    std::cin >> new_row >> new_col;
    if (new_row < 8 && new_row > 0&&new_col < 8&& new_col > 0){
        if ((abs(new_row - row) == 2 && abs(new_col - col) == 1)||(abs(new_row - row) == 1 && abs(new_col - col) == 2)){
            valid = true;
        } 
    }
    if (valid){
        std::cout << "Move is valid" << std::endl;
    }
}