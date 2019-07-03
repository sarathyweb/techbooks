/**************************************************************
 * This C++ program reads two Sales_item objects as input 
 * and check whwther the ISB of the two objects are same or not
 *************************************************************/
 
 #include<iostream>
 #include "Sales_item.h"
 
 int main(){
     
     Sales_item book1, book2;
     std::cout << "Enter the ISBN, No. Of Copes sold, price of Book1 followed by Book2" << std::endl;
     std::cin >> book1 >> book2;
     if (book1.isbn() == book2.isbn()){
         std::cout << "Same ISBN" << std::endl;
         return 0;
     } else {
         std::cerr << "Diffrent ISBN" << std::endl;
         return -1;
     }
     
 }
 