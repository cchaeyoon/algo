#include <iostream>
using namespace std;

int main() {
	int x;
	cin >> x;

	int total=0;
	for (int i = 0; i <= 6; i++) {
		if (x % 2 == 1)
			total++;
		x /= 2;
	}
	cout << total;
}