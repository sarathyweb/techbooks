/*********************************************
 * C++ Program to demonstrate while loop
 ********************************************/

#include<iostream>

int main(){
    int sum = 0;
    int val = 1;
    
    while(val <=10){
        sum += val;
        val++;
    }
    std::cout << "The sum of numbers from 1 to 10 is "<<sum << std::endl;
}