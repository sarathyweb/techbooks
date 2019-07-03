/************************************************************************
 * C++ program to print the sum of integers from 50 to 100 using for loop
************************************************************************/

#include<iostream>

int main(){
    int sum = 0;
    for (int start = 50; start<=100;start++){
        sum += start;
    }
    std::cout << "The sum of numbers from 50 to 100 is "<< sum << std::endl;
    return 0;
}