#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int cnt[10001] = {0};
	int n;
	cin >> n;

	int value;
	for (int i = 0; i < n; i++) {
		cin >> value;
		cnt[value]++;
	}  

	for (int i = 1; i < 10001; i++) {
		for (int j = 0; j < cnt[i]; j++) {
			cout << i << '\n';
		}
	}
}