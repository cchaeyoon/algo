#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;

	int count = 0;
	int arr[2] = { 5, 2 };

	if (n != 1 && n!=3 ) {
		for (int i = 0; i < 2; i++) {
			count += n / arr[i];
			n %= arr[i];
			if (n == 3 || n == 1) {
				count -= 1;
				n += arr[i];
			}
		}
		cout << count;
	}
	else if (n == 1 || n==3) {
		cout << -1;
	}
}