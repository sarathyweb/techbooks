/*****************************************
 * C++ program to demonstrate global scope
*****************************************/
#include<iostream>

int reused = 42;

int main(){
    int unique  = 0;
    std::cout << reused <<" " << unique << std::endl;
    reused = 0;
    std::cout << reused <<" " << unique << std::endl;
    std::cout << ::reused <<" " << unique << std::endl;
}