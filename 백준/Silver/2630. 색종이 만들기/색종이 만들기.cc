#include <iostream>
using namespace std;

int arr[130][130];
int sum0 = 0, sum1 = 0;		// sum0이 하얀, sum1이 파란

void f(int x1, int x2, int y1, int y2) {
	bool flag = true;		// 현재 정사각형이 하나의 색으로 이루어져있는지
	for (int i = y1; i <= y2; i++) {
		for (int j = x1; j <= x2; j++) {
			if (arr[i][j] != arr[y1][x1]) {
				flag = false;
			}
		}
	}
	if (flag) {
		if (arr[y1][x1] == 0) {
			sum0 += 1;
		}
		else {
			sum1 += 1;
		}
	}
	else {
		int xmid = (x1 + x2) / 2;
		int ymid = (y1 + y2) / 2;
		f(x1, xmid, y1, ymid);
		f(xmid + 1, x2, y1, ymid);
		f(x1, xmid, ymid + 1, y2);
		f(xmid + 1, x2, ymid + 1, y2);
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n;
	cin >> n;

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			cin >> arr[i][j];
		}
	}
	f(1, n, 1, n);
	cout << sum0 << '\n' << sum1;
}