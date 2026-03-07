#include "logic.h"

int find_sum_of_numbers() {

	int sum = 0;

	for (int number = 3; number < 1000; number++)
	{
		if ((number < 1000 && number % 3 == 0)
			|| (number < 1000 && number % 5 == 0)) {
			sum += number;
		}
	}

	return sum;
}