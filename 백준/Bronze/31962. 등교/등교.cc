#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n, x;
	cin >> n >> x;
	int s[100];
	int t[100];

	for (int i = 0; i < n; i++) {
		cin >> s[i] >> t[i];
	}
	int small=-1;
	for (int i = 0; i < n; i++) {
		if (s[i] + t[i] <= x) {
			small = s[i];
			if (s[i] > small)
				small = s[i];
		}
	}
	cout << small;
}