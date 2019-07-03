/***********************************************************
 * This C++ program read several objects of type Sales item
 * and prints the counts of ISBN numbers
***********************************************************/

#include<iostream>
#include "Sales_item.h"

int main(){
    Sales_item current_item , input_item;
    
    if (std::cin >> current_item){
        int count = 1;
        while(std::cin >> input_item){
            if ( current_item.isbn() == input_item.isbn()){
                count++;
            } else {
                std::cout << current_item << " occurs " << count << " times " << std::endl;
                input_item = current_item;
                count = 1;
            }
            
        }
        std::cout << current_item << " occurs " << count << " times" << std::endl;
    }
}
