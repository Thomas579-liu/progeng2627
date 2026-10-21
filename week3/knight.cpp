#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>

int main() {
    //random start pos
    std::srand(std::time(NULL));
    int row = std::rand() % 6 + 2;
    int col = std::rand() % 6 + 2;
    //variables
    int counter=0, new_row, new_col;
    bool valid=false, success=false;
    int corner[4] = {};
    std::cout << "Starting position: " << row << " " << col << std::endl;
    //main loop
    while((counter<5) && !((row==1||row==8) && (col==1||col==8))){
        std::cin >> new_row >> new_col;
        if (new_row <= 8 && new_row > 0&&new_col <= 8&& new_col > 0){
            if ((abs(new_row - row) == 2 && abs(new_col - col) == 1)||(abs(new_row - row) == 1 && abs(new_col - col) == 2)){
                valid = true;
                row = new_row;
                col = new_col;
                counter = counter + 1;
                std::cout << "Moves used: " << counter << "/5" << std::endl;
            } 
            else{
                std::cout << "Move invalid" << std::endl;
        }
        }
        
        else{
                std::cout << "Move invalid" << std::endl;
        }
        
        if (counter > 5){
            counter = 0;
            row = std::rand() % 6 + 2;
            col = std::rand() % 6 + 2;
            std::cout << "find a shorter path" << std::endl;
        }
        success = (row==1||row==8) && (col==1||col==8);
        if (success){
            std::cout << "You reached corner" <<std::endl;
        }
    }
}