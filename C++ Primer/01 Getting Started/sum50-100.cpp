/***********************************************
 * C++ program to print the sum of numbers from
 * 50 to 100
 **********************************************/
#include<iostream>
 
int main(){
    int sum =0;
    
    int val = 50;
    
    while(val<=100){
        sum += val;
        val++;
    }
    std::cout << "THe sum of number from 50 to 100 is " << sum << std::endl;
    return 0;
}