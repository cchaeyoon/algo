#include <iostream>
#include <vector>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n, s;
	cin >> n >> s;
	vector<int> v(n + 1);
	v[0] = 0;

	for (int i = 1; i <= n; i++) {
		int a;
		cin >> a;
		v[i] = v[i - 1] + a;
	}

	int left = 1, sum=0;
	vector<int> len(n + 1);
	int minLength = n + 1;

	for (int right = 0; right <= n; right++) {
		sum = v[right] - v[left-1];

		while (sum >= s) {
			minLength = min(minLength, right - left + 1);
			left++;
			sum = v[right] - v[left - 1];
		}
	}

	if (minLength == n + 1) {
		cout << 0;
	}
	else {
		cout << minLength;
	}
}