/**************************************************************
 * To write a C++ program to get a string asn an input and    *
 * remove all punctuation charecters and display it to STDOUT *
**************************************************************/

#include<iostream>
#include<string>

using namespace std;

int main(){
    string someString;
    std::cout << "Enter a string :";
    getline(cin,someString);
    for( auto c: someString){
        if(!ispunct(c)){
            std::cout << c;
        }
    }
    std::cout << std::endl;
    return 0;
}