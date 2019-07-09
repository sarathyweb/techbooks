/***************************************************
 * C++ program to understand pointers and references
***************************************************/

#include<iostream>

int main(){
    int i = 1024;
    std::cout << "i = 1024" << std::endl;
    std::cout << i << std::endl;
    int *p = &i;
    std::cout << "*p = &i" << std::endl;
    std::cout << *p << std::endl;
    int &r = i;
    std::cout << "&r = i" << std::endl;
    std::cout << r << std::endl;
    i++;
    std::cout << r << std::endl;
    return 0;
}