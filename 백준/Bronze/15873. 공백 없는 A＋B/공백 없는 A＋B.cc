#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int sum;
	if (n >= 110) { //210=12
		sum = n / 100 + n % 100;
	}
	else {
		sum = n / 10 + n % 10;
	}
	cout << sum;
}