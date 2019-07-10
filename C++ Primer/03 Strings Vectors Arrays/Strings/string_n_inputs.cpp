/****************************************************************
 * C++ program to read unknown number of strings from STDIN and *
 * display the outut to STDOUT                                  *
****************************************************************/

#include<iostream>
#include<string>

int main(){
    std::string word;
    while(std::cin >> word){
        std::cout << word << std::endl;
    }
    return 0;
}
