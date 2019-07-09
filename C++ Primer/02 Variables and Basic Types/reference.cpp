/**************************************
 * C++ program to demonstrate reference
**************************************/

#include<iostream>

int main(){
    int i = 1204;
    std::cout << "i = 1204" << std::endl;
    std::cout << "Value of i is " << i << std::endl;
    int i2 = 2048;
    std::cout << "i2 = 2048" << std::endl;
    std::cout << "value of i2 is " << i2 << std::endl;
    int i3 = 1024;
    std::cout << "i3 = 1024" << std::endl;
    std::cout << "value of i3 is " <<i3 << std::endl;
    int &ri = i3;
    std::cout << "&ri = i3" << std::endl;
    std::cout << "value of ri is " << ri << std::endl;
    std::cout << "value of &ri is " << &ri << std::endl;
    return 0;
}