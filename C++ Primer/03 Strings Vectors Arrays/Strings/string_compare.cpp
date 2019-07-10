/***********************************
 * C++ program to comapre to strings
***********************************/

#include<iostream>
#include<string>

using namespace std;

int main(){
    string string1 = "Hello";
    cout << "string1 = \"Hello\"" << endl;
    string string2 = "Hello World";
    cout << "strinng2 = \"Hello World\"" << endl;
    string string3 = "Heyyyyy";
    cout << "string3 = \"Heyyyyy\"" <<endl;
    
    cout << "string1 < string2  " << (string1 < string2) << endl;
    cout << "string1 > string2  " << (string1 > string2) << endl;
    cout << "string2 < string3  " << (string2 < string3) << endl;
    cout << "string2 > string3  " << (string2 > string3) << endl;
    cout << "string1 < string3  " << (string1 < string3) << endl;
    cout << "string1 > string3  " << (string1 > string3) << endl;
    
    return 0;
}