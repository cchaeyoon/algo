#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, m;
	cin >> n >> m;
	int arr[101] = {};
	for (int i = 0; i < 101; i++) {
		arr[i] = i;
	}

	int a, b;
	for (int i = 0; i < m; i++) {
		cin >> a >> b;
		while (a < b) {
			arr[0] = arr[a];
			arr[a] = arr[b];
			arr[b] = arr[0];
			a++;
			b--;
		}
	}

	for (int i = 0; i < n; i++) {
		cout << arr[i + 1] << " ";
	}
}