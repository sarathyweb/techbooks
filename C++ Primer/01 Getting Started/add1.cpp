// C++ Program to add two numbers given from STDIN and display the output to STDOU using multiple print statements

#include<iostream>

int main(){
    std::cout << "Enter two numbers" << std::endl;
    int v1 = 0, v2 = 0;
    std::cin >> v1 >> v2;
    std::cout<<"The sum of";
    std::cout<<v1;
    std::cout<<" and ";
    std::cout<<v2;
    std::cout<<" is ";
    std::cout<<v1 + v2;
    std::cout<<std::endl;
    return 0;
}