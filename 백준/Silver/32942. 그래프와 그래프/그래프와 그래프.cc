#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int a, b, c;
	cin >> a >> b >> c;

	for (int i = 1; i <= 10; i++) {
		bool found = false;
		for (int j = 1; j <= 10; j++) {
			if (i * a + j * b == c) {
				cout << j<<" ";
				found = true;
			}
		}
		if (!found) {
			cout << 0 << '\n';
		}
		else {
			cout << '\n';
		}
	}
	
	return 0;
}