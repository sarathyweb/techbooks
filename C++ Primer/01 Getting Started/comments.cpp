#include<iostream>

int main(){
    std::cout<<"/*";
    std::cout<<"*/";
    // incorrect code
    //std::cout<</* "*/" */;
    // corrected version
    std::cout<</* "*/" */";
    std::cout << /*  "*/" /* "/*"  */;
    
    return 0;
}