/************************************************************
 * C++ program to print numbers from 10 to 0 using while loop
************************************************************/

#include<iostream>

int main() {
    int val = 10;
    while(val>=0){
        std::cout << val << std::endl;
        val--;
    }
    return 0;
}