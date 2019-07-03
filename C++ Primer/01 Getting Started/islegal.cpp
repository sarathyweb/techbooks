#include<iostream>

int main(){
	int v1 =0, v2=0;
	/* Given program is illegal
	std::cout << "The sum of " << v1;
	       << " and " << v2;
		   << " is " << v1 + v2 << std::endl;
	*/
	/* Corrrected version  */
	std::cout << "The sum of " << v1;
	std::cout<< " and " << v2;
	std::cout<< " is " << v1 + v2 << std::endl;
	
	
	return 0;
}
