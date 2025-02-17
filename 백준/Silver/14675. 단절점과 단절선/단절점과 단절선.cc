#include <iostream>
#include <vector>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n;
	cin >> n;
	vector<vector<int>> v(n+1);		// 인접 리스트
	vector<int> l(n+1, 0);

	for (int i = 1; i < n; i++) {
		int a, b;
		cin >> a >> b;
		v[a].push_back(b);
		v[b].push_back(a);
		l[a]++;
		l[b]++;
	}
	int q;
	cin >> q;
	for (int i = 0; i < q; i++) {
		int t, k;
		cin >> t >> k;
		if (t == 1) {
			if (v[k].size() > 1) {
				cout << "yes" << '\n';
			}
			else {
				cout << "no" << '\n';
			}
		}
		else if (t == 2) {
			if (l[k] > 0) {
				cout << "yes" << '\n';
			}
			else {
				cout << "no" << '\n';
			}
		}
	}

	return 0;
}