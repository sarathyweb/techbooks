/****************************************************
 * C++ program to print the range between two numbers 
****************************************************/

#include<iostream>

int main(){
    int start = 0 , end = 0;
    
    std::cout << "Enter the start value" << std::endl;
    std::cin >> start;
    std::cout << "Enter the end value" << std::endl;
    std::cin >> end;
    
    for (int i = start; i<= end; i++){
        std::cout << i << std::endl;
    }
    return 0;
}