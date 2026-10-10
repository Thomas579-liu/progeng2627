#include <iostream>
int main(){
    double side_1, side_2, area, perimeter;
    std::cout << "What is the length of the first side" << std::endl;
    std::cin >> side_1;
    std::cout << "What is the length of the second side" << std::endl;
    std::cin >> side_2;
    area = side_1*side_2;
    perimeter = (side_1+side_2)*2;
    std::cout << "The area is " << area << " and the perimeter is " << perimeter << std::endl;
}