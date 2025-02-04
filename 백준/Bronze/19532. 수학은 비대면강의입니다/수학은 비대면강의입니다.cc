#include <iostream>
using namespace std;

void solve() {
	int a, b, c, d, e, f;
	cin >> a >> b >> c >> d >> e >> f;
	for (int x = -999; x <= 999; x++) {
		for (int y = -999; y <= 999; y++) {
			if (a * x + b * y == c && d * x + e * y == f) {
				cout << x << " " << y;
			}
		}
	}
}
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	solve();
}