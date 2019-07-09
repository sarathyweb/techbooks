/*******************************************
 * C++ program to understand type conversion
*******************************************/

#include<iostream>

int main(){
    bool b = 42;
    std::cout << "bool b = 42" << std::endl;
    std::cout << "b has value " << b << std::endl;
    int i = b;
    std::cout << "int i = b" << std::endl;
    std::cout << "i has value " << i<< std::endl;
    i = 3.14;
    std::cout << "i = 3.14" << std::endl;
    std::cout << "i has value " <<i << std::endl;
    double pi = i;
    std::cout << "double pi = i" << std::endl;
    std::cout << "pi has value " << pi << std::endl;
    unsigned char c = -1;
    std::cout << "unsigned char c = -1" << std::endl;
    std::cout << "c has value " << c << std::endl;
    signed char c2 = 256;
    std::cout << "signed char c2" << std::endl;
    std::cout << "c2 has value " << c2 << std::endl;
    return 0;
}