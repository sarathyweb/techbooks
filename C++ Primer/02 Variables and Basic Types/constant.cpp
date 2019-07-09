/**************************************
 * C++ program to demonstrate constants
**************************************/

#include<iostream>

int main(){
    int i = 42;
    const int &ri = i;
    std::cout << ri << std::endl;
    //ri++; // ERROR
    return 0;
}