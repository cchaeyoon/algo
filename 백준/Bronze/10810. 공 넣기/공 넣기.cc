#include <iostream>
#include <vector>
using namespace std;

int main() {
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	int n, m;
	cin >> n >> m;
	vector<int> arr(n);

	int i, j, k;
	for (int a = 0; a < m; a++) {
		cin >> i >> j >> k;
		for (int b = i; b <= j; b++) {
			arr[b - 1] = k;
		}
	}
	for (int a = 0; a < n; a++) {
		cout << arr[a] << " ";
	}
}