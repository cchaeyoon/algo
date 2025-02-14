#include <iostream>
using namespace std;

void hanoi(int n, int a, int b, int c) {
	if (n == 1) {
		cout << a << ' ' << c << '\n';
	}
	else {
		hanoi(n - 1, a, c, b);
		cout << a << ' ' << c << '\n';
		hanoi(n - 1, b, a, c);
	}
}
int hanoiCnt(int n) {
	if (n == 1) {
		return 1;
	}
	return 2 * hanoiCnt(n - 1) + 1;
}
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n;
	cin >> n;
	cout << hanoiCnt(n) << '\n';
	hanoi(n, 1, 2, 3);
}