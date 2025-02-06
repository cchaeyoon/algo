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
		v[i] = v[i - 1] + a;	// 누적합
	}

	int left = 1, sum=0;
	int minLength = n + 1;
	
	for (int right = 0; right <= n; right++) {		// right가 이동
		sum = v[right] - v[left-1];

		while (sum >= s) {	// sum이 s 이상이면
			minLength = min(minLength, right - left + 1);	// 최소 길이 업데이트
			left++;		// left가 이동
			sum = v[right] - v[left - 1];	// sum 업데이트
		}
	}

	if (minLength == n + 1) {		// 최소 길이가 그대로면 0 출력
		cout << 0;
	}
	else {
		cout << minLength;
	}
}