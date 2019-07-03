/*********************************************************************
 * C++ program to print the numbers betwwen two rnage given from STDIN
*********************************************************************/

#include<iostream>

int main(){
    int start = 0;
    int end = 0;
    std::cout << "Enter the start value" << std::endl;
    std::cin >> start;
    std::cout << "Enter the ending value" << std::endl;
    std::cin >> end;
    
    while(start<=end){
        std::cout << start << std::endl;
        start++;
    }
    return 0;
}