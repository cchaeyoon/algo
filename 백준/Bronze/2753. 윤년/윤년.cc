#include <iostream>
using namespace std;

int main() {
	int year;
	int result;
	cin >> year;
	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
		result = 1;
	else
		result = 0;
	cout << result;
}