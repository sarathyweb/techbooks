/***********************************************
 * C++ program to demonstrate pointer to pointer
***********************************************/

#include<iostream>

int main(){
    int a = 42;
    int *b = &a;
    int **c = &b;
    std::cout << **c << std::endl;
    return 0;
}