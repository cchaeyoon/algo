#include <iostream>
#include <vector>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;
	int result;
	vector<int> p(10001, 1);
	vector<int> rp;
	p[0] = p[1] = 0;

	for (int i = 2; i <= 10000; i++) {
		if (p[i] == 1) {
			for (int j = i + i; j <= n; j += i) {
				p[j] = 0;
			}
		}
	}
	for (int i = 2; i <= 10000; i++) {
		if (p[i] == 1) {
			rp.push_back(i);
		}
	}
	for (int i = 0; i < rp.size()-1 ; i++) {
		int mul = rp[i] * rp[i + 1];
		if (mul > n) {
			result = mul;
			break;
		}
	}
	cout << result;
}