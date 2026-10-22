#include <iostream>

void sort_3_numbers(double& s1, double& s2, double& s3){
    if (s1>s2 && s1>s3){
        if (s2 > s3){
            std::cout << "Already sorted" << std::endl;
        }
        else{
            double temp;
            temp = s2;
            s2 = s3;
            s3 = temp;
        }
    }
    else if (s2>s1 && s2>s3){
        double temp;
        temp = s1;
        s1 = s2;
        s2 = temp;
        if (s2 > s3){
            std::cout << "Already sorted" << std::endl;
        }
        else{
            double temp;
            temp = s2;
            s2 = s3;
            s3 = temp;
        }
    }
    else if (s3>s1 && s3>s2){
        double temp;
        temp = s1;
        s1 = s3;
        s3 = temp;
        if (s2 > s3){
            std::cout << "Already sorted" << std::endl;
        }
        else{
            double temp;
            temp = s2;
            s2 = s3;
            s3 = temp;
        }
    }
}
int main(){
    double s1, s2, s3;
    std::cout << "please enter 3 numbers:" << std::endl;
    std::cin >> s1 >> s2 >> s3;
    sort_3_numbers(s1, s2, s3);
    std::cout << s3 << " " << s2 << " " << s1 << std::endl;
}