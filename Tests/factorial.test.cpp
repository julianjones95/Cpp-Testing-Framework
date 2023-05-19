#include <iostream>
#include "../factorial.h"


bool testPositives(){

	int output, input = 5;
	
	output = Factorial(input);

	bool result = (output == 120);

	if(result) {
		std::cout << "Test Passed!" << std::endl;
		
	}

	return result;

}
