#include <iostream>
using namespace std;

int factorial(int n) {
	if (n > 2) {
		n *= factorial(n - 1);
	}
	return n;
}
int main() {
	int num;
	cin >> num;
	int total = 1;
	if (num != 0) {
		total = factorial(num);
	}
	cout << total;
}