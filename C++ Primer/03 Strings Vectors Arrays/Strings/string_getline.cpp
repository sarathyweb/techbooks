/*************************************************
 * C++ program program to read a line of strings *
 * and display it to STDOUT                      *
*************************************************/

#include<iostream>
#include<string>

int main(){
    std::string line;
    while(std::getline(std::cin,line)){
        if(!line.empty()){
            std::cout << line << std::endl;
            //std::string::size_type len = line.size();
            auto len = line.size(); /// same as above
            std::cout << "The length of the string is " << len << std::endl;
        }
    }
    return 0;
}