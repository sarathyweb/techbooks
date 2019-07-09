/***************************************************
 * C++ program to demonstrate reference to a pointer
***************************************************/

#include<iostream>

int main(){
    int i = 42;
    std::cout << "i = 42" << std::endl;
    int *p = &i;
    std::cout << "*p = &i" << std::endl;
    std::cout << "Value of *p is "<<*p << std::endl;
    int *&r = p;
    std::cout << "*&r = p" << std::endl;
    std::cout << "Value of r is " << r << std::endl;
    std::cout << "Value of &r is " << &r << std::endl;
    std::cout << "Value of *&r is " << *&r << std::endl;
    std::cout << "Value of *r is " << *r << std::endl;
    std::cout << "Value of &*r is " << &*r << std::endl;
    r =  &i;
    std::cout << "r = &i" << std::endl;
    *r = 0;
    std::cout << "*r = 0" << std::endl;
    return 0;
}