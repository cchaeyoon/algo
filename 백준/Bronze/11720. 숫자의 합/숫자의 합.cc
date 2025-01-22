#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;

	int total = 0;

	string a;
	cin >> a;

	for (int i = 0; i < n; i++) {
		total += a[i] - '0';
	}
	cout << total;
}