/**************************************************************************
 * Write a program to read strings from the standard input,               *
 * concatenating what is read into one large string.                      *
 * Print the concatenated string                                          *
 * Next, change the program to separate adjacent input strings by a space *
**************************************************************************/

#include<iostream>
#include<string>

int main(){
    std::string stringIn, stringOut;
    while(std::cin >>stringIn){
        stringOut +=" " + stringIn;
    }
    std::cout << stringOut << std::endl;
    return 0;
}