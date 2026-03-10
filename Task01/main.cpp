#include "logic.h"

int main() {

	long long number;
	cout << "Input number: ";
	cin >> number;

	bool result = is_the_perfect_number(number);

	string msg = result ? "Yes" : "No";

	cout << msg;


	return 0;
}