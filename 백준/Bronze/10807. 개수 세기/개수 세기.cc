#include <iostream>
#include <vector>
using namespace std;

int main() {
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int i;
	cin >> i;
	vector<int> a(i);

	for (int j = 0;j < i;j++) {
		cin >> a[j];
	}
	int k;
	cin >> k;
	int m = 0;
	for (int j = 0;j < i;j++) {
		if (a[j] == k) {
			m++;
		}
	}
	cout << m;
}