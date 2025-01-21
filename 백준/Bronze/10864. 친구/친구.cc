#include <iostream>
#include <string>
using namespace std;

int main() {
	int n, m;
	cin >> n >> m;
	int arr[1000] = {};

	int a, b;
	for (int i = 0; i < m; i++) {
		cin >> a >> b;
		arr[a]++;
		arr[b]++;
	}
	for (int i = 1; i <= n; i++) {
		cout << arr[i] << '\n';
	}
}