/*****************************************************************
 * C++ program to read data from STDIN into the Sales_item obect
 * and write back thAT sALES_ITEM TO stdout
*****************************************************************/

#include<iostream>
#include "Sales_item.h"

int main(){
    Sales_item book1;
    // Read ISBN, No.of copies sold, sales price
    std::cin >> book1;
    // write ISBN, No.of copies sold, total revenue and average price
    std::cout << book1 << std::endl;
    return 0;
}