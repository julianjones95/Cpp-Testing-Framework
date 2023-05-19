#include "factorial.h"

int Factorial(int number) {

	int output =number;
	if(number == 1) {
		return 1;
	}

	output = output * Factorial(number-1);

	return output;
}
