/*************************************
 * C++ program to demonstrate pointers
*************************************/

#include<iostream>

int main(){
    int a = 5 ;
    int *ptr = &a;
    std::cout << "The value of a is " << a << std::endl;
    std::cout << "The value of ptr is " << ptr<< std::endl;
    std::cout << "The value of *ptr is " << *ptr<< std::endl;
    return 0;
}