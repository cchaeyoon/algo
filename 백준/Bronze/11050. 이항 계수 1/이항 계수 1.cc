#include<iostream>
using namespace std;

int factorial(int n) {
	if (n <= 1)
		return 1;
	return n * factorial(n - 1);
}
int main() {
	int a, b;
	cin >> a >> b;
	cout << (factorial(a)) / ((factorial(a - b)) * (factorial(b)));
}