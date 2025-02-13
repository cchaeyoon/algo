#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n, m;
vector<int>P;

void nm1(int cnt) {
	if (cnt == m) {
		for (int i = 0; i < cnt; i++) {
			cout << P[i] << ' ';
		}
		cout << '\n';
	}

	for (int i = 1; i <= n; i++) {
		if (find(P.begin(), P.end(), i) == P.end()) {
			P.push_back(i);
			nm1(cnt + 1);
			P.pop_back();
		}
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	cin >> n >> m;
	nm1(0);
}