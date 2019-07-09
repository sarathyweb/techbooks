/*************************************
 * C++ program to demonstrate pointers
*************************************/

#include<iostream>

int main(){
    int i = 42;
    std::cout << "i = 42" << std::endl;
    std::cout << "value of i is " <<i << std::endl;
    std::cout << std::endl;
    int &r = i;
    std::cout << "&r = i" << std::endl;
    std::cout << "value of r is " << r << std::endl;
    std::cout << "value of &r is " << &r << std::endl;
    //std::cout << "value of *r is " << *r << std::endl;
    std::cout << std::endl;
    int *p;
    std::cout << "declare *p" << std::endl;
    std::cout << "value of p is " << p << std::endl;
    std::cout << "value of *p is " << *p << std::endl;
    p = &i;
    std::cout << "p = &i" << std::endl;
    std::cout << "value of p is " << p << std::endl;
    std::cout << "value of *p is " << *p << std::endl;
    std::cout << "value of &p is " << &p << std::endl;
    *p =i;
    std::cout << "*p =i" << std::endl;
    std::cout << "value of p is " << p << std::endl;
    std::cout << "value of *p is " << *p << std::endl;
    int &r2 = *p;
    std::cout << "&r2 = *p" << std::endl;
    std::cout << "Value of r2 is " <<r2 << std::endl;
    std::cout << "Value of &r2 is " <<&r2<< std::endl;
    return 0;
}