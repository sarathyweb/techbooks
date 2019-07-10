/**********************************************
 * C++ mprogram to demonstrate range-for loop *
**********************************************/

#include<iostream>
#include<string>
#include<cctype>

using namespace std;

int main(){
    string str = "Hello String!";
    decltype(str.size()) pun_count =0;
    for(auto c: str){
        if(ispunct(c)){
            pun_count++;
        }
        std::cout << c << std::endl;
    }
     std::cout <<"No of punctuation charecters: "<< pun_count << std::endl;
    return 0;
}