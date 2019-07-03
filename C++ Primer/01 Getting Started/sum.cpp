// C++ program to add two numbers given from the STDIN

#include<iostream>

int main(){
    std::cout<<"Enter two numbers"<<std::endl; // endl is a special value called manipulator
    int v1, v2;
    std::cin >> v1 >> v2;
    std::cout<<"The sum of " << v1 << " and " << v2 << " is " << v1 + v2 <<std::endl;
    return 0;
}