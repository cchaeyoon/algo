#include <iostream>
#include <vector>
using namespace std;

int main() {
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	vector<int> a(100), b(100), c(100);
	int i = 0;
	while (true) {
		cin >> a[i] >> b[i] >> c[i];
		if (a[i] == 0 && b[i] == 0 && c[i] == 0) {
			break;
		}
		i++;
	}
	for (int j = 0;j < i;j++) {
		if (((a[j] * a[j]) + (b[j] * b[j]) == (c[j] * c[j])) ||
			((a[j] * a[j]) == (b[j] * b[j]) + (c[j] * c[j])) ||
			((b[j] * b[j]) == (a[j] * a[j]) + (c[j] * c[j]))
			) {
			cout << "right"<<'\n';
		}
		else
			cout << "wrong"<<'\n';
	}
}