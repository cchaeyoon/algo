#include <iostream>
#include <vector>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n, m;
	cin >> n >> m;
	vector<long long> arr(n+1);

	arr[0] = 0;
	for (int i = 1; i <= n; i++) {	//누적합
		long long x;
		cin >> x;
		arr[i] = arr[i - 1] + x;
	}

	for (int i = 0; i < m; i++) {
		int start, end;
		cin >> start >> end;
		int result = arr[end] - arr[start-1];
		cout << result<<'\n';
	}
}