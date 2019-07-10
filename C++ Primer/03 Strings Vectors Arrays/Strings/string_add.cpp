/********************************
 * C++ program to add two strings
********************************/

#include<iostream>
#include<string>

using namespace std;

int main(){
    string string1 = "Hello";
    string string2 = "World";
    string string3 = string1 + " " + string2;
    std::cout << string3 << std::endl;
    std::cout << string3 + " " +string3<< std::endl;
    return 0;
    
}