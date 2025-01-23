#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, count = 0;
	cin >> n;

	if (n % 5 == 0)
		cout << n / 5;
	else {
		while (n > 0) {
			n -= 2;
			count++;
			if (n % 5 == 0) {
				cout << count + (n / 5);
				break;
			}
		}
	}
	if (n < 0) {
		cout << -1;
	}
}