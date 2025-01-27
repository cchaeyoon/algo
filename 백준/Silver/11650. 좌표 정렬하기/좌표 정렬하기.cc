#include <iostream>
#include <utility>
#include <algorithm>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n;
	cin >> n;

	pair<int, int>arr[100000];
	int x, y;

	for (int i = 0; i < n; i++) {
		cin >> x >> y;
		arr[i] = make_pair(x, y);
	}

	sort(arr, arr + n);
	for (int i = 0; i < n; i++) {
		cout << arr[i].first << " " << arr[i].second << "\n";
	}
}