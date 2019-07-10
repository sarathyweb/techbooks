/*****************************************************************
 * C++ program to demonstrate various ways to initialize a astring
*****************************************************************/

#include<iostream>
#include<string>

using namespace std;

int main(){
    string s1;
    cout << "s1 : "<< s1 <<endl;
    string s2 = s1;
    cout<< "s2 : "<<s2<<endl;
    string s3 = "Hiya";
    cout<< "s3 : "<<s3<<endl;
    string s4(10,'f');
    cout<<"s4 : "<<s4<<endl;
    return 0;
}