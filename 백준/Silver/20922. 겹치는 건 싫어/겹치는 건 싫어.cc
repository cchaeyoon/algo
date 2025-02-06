#include <iostream>
#include <vector>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n, k;
	cin >> n >> k;
	vector<int> v(200001, 0);
	vector<int> arr(n);

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	int left = 0, ans = 0;

	for (int right = 0; right < n; right++) {
		v[arr[right]]++;

		while (v[arr[right]] > k) {
			v[arr[left]]--;
			left++;
		}

		ans = max(ans, right - left + 1);
	}
	cout << ans;
}