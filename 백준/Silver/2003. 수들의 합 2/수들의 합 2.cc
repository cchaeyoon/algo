#include <iostream>
#include <vector>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n, m;
	cin >> n >> m;
	vector<int> v(n+1);
	for (int i = 1; i <= n; i++) {
		cin >> v[i];
	}

	int s = 0, ans = 0;
	for (int l = 1, r = 0; l <= n; l++) {
		while (r < n && s < m) {
			r++;
			s += v[r];
		}
		if (s == m) {
			ans++;
		}
		s -= v[l];
	}
	cout << ans << '\n';
}