#include <iostream>
using namespace std;

long long a, b, c, x;

long long solve(long long b) {
	if (b == 0) {
		return 1;
	}
	else if (b == 1) {
		return a % c;
	}

	x = solve(b / 2) % c;		// b를 반으로 줄여서 계산
	if (b % 2 == 0) {		// b가 짝수
		return x * x % c;
	}
	else {		// b가 홀수
		return x * x % c * a % c;
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	cin >> a >> b >> c;
	cout << solve(b);
}