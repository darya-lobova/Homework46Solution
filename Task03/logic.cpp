#include "logic.h"

int find_missing_element(int n, int array[DEFAULT_SIZE]) {
	long long sum = 0;
	int max_value = 0;

	for (int i = 0; i < n; i++) {
		sum = sum + array[i];
		if (array[i] > max_value) {
			max_value = array[i];
		}
	}

	long long expected = max_value * (max_value + 1) / 2; //формула Гаусса

	if (expected == sum) {
		return 0;
	}

	return expected - sum;
}