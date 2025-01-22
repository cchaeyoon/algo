#include <iostream>
using namespace std;

int main() {
	int x[1001] = {};
	int y[1001] = {};

	int a, b;
	for (int i = 0; i < 3; i++) {
		cin >> a >> b;
		x[a]++;
		y[b]++;
	}
	for (int i = 0; i < 1001; i++) {
		if (x[i] == 1) {
			a = i;
		}
		if (y[i] == 1) {
			b = i;
		}
	}
	cout << a << " " << b;
}