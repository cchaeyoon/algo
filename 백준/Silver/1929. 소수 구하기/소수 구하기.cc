#include <iostream>
#include <vector>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int m, n;
	cin >> m >> n;
	vector<int> p(n+1, 1);
	p[1] = 0;

	for (int i = 2; i <= n; i++) {    //에라토스테네스의 체
		if (p[i] == 1) {    //소수(1)면 본인의 배수를 소수가 아니다(0)으로 변경
			for (int j = i + i; j <= n; j += i) {
				p[j] = 0;
			}
		}
	}
	for (int i = m; i <= n; i++) {    //m부터 n 출력
		if (p[i] == 1) {
			cout << i << '\n';
		}
	}
}