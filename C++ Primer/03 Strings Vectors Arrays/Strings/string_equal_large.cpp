/*********************************************************************************
 * Write a program to read two strings and report whether the strings are equal. *
 * If not, report which of the two is larger.                                    *                                       *
*********************************************************************************/

#include<iostream>
#include<string>

using namespace std;

int main(){
    string string1, string2;
    std::cout << "Enter string1 : ";
    cin>>string1;
    std::cout <<"Enter string2 : ";
    cin>>string2;
    if (string1 == string2){
        std::cout << "string1 and string2 are equal" << std::endl;
    } else {
        if ( string1 < string2){
            std::cout << "string2 is larger" << std::endl;
        } else{
            std::cout << "string1 is larger" << std::endl;
        }
    }
    return 0;
}