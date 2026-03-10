#include "logic.h"

int main() {

	int n;
	int array[DEFAULT_SIZE];

	do {
		cout << "Input n: ";
		cin >> n;
	} while (n <= 1);


	cout << "Input elements: ";
	for (int i = 0; i < n; i++)
	{
		cin >> array[i];
	}

	int result = find_missing_element(n, array);

	cout << result;

	return 0;
}