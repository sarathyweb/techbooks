/*
 * C++ Programs to multiply two numbers given from STDIN and print the result to STDOUT
 */

#include<iostream>

int main(){
    std::cout<<"Enter two numbers"<<std::endl;
    int v1, v2;
    std::cin >> v1 >> v2;
    std::cout<<"The Multiplication of "<< v1<< " and " << v2<< " is " << v1 * v2 <<std::endl;
    return 0;
}