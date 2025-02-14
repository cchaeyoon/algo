#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int f(int a, int b, int c, int d, vector<vector<int>>& v) {
	if (a == c && b == d) {		// 1 x 1 일때
		return v[a][b];
	}
	int x = (c + a) / 2;
	int y = (d + b) / 2;

	vector<int>tmp(4);
	tmp[0] = f(a, b, x, y, v);
	tmp[1] = f(a, y + 1, x, d, v);
	tmp[2] = f(x + 1, b, c, y, v);
	tmp[3] = f(x + 1, y + 1, c, d, v);

	sort(tmp.begin(), tmp.end());
	return tmp[1];		// 두 번째로 작은 값
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n;
	cin >> n;
	vector<vector<int>> v(n, vector<int>(n));

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> v[i][j];
		}
	}
	cout << f(0, 0, n-1, n-1, v);
}