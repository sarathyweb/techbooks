/********************************************************
 * C++ program to demonstrate the use of the auto keyword
********************************************************/

#include<iostream>

int main(){
    const int i = 42;
    auto j = i;
    const auto &k = i;
    std::cout << "k = " << k<< std::endl;
    auto *p = &i;
    std::cout << "*p = "<<*p << std::endl;
    return 0;
}