#include <iostream>
#include <vector>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n, x;
	cin >> n >> x;
	vector<int> arr(n+1, 0);

	for (int i = 1; i <= n; i++) {
		int num;
		cin >> num;
		arr[i] = arr[i - 1] + num;
	}

	int maxSum = arr[1];
	int freq = 1;

	for (int i = x; i <= n; i++) {
		int sum=arr[i]-arr[i-x];

		if (sum > maxSum) {
			maxSum = sum;
			freq = 1;
		}
		else if (sum == maxSum) {
			freq++;
		}
	}
	if (maxSum == 0) {
		cout << "SAD";
	}
	else {
		cout << maxSum << '\n';
		cout << freq << '\n';
	}
}