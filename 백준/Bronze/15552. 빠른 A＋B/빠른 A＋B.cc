#include <iostream>
#include <vector>
using namespace std;

int main() {
	int m;
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	cin >> m;
	vector<int>a(m), b(m);

	for (int i = 0;i < m;i++) {
		cin >> a[i] >> b[i];
	}
	for (int i = 0;i < m;i++) {
		cout << a[i] + b[i];
		cout << "\n";
	}
}