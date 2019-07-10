/*********************************************
 * C++ program to demonstrate toupper function
*********************************************/

#include<iostream>
#include<string>
#include<cctype>

using namespace std;

int main(){
    string someString;
    std::cout << "Enter s string :";
   getline(cin,someString);
    
    for(decltype(someString.size()) index =0; index != someString.size() && !isspace(someString[index]); ++index){
        someString[index] =  toupper(someString[index]);
    }
    std::cout << someString << std::endl;
}