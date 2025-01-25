#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n, x, s, t;
	cin >> n >> x;
	int small = -1;

	for (int i = 0; i < n; i++) {
		cin >> s >> t;
		if (s + t <= x && small < s) {
			small = s;
		}
	}
	cout << small;
}