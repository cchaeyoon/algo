#include <iostream>
#include <vector>
using namespace std;

int main() {
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	vector<int> a(100), b(100);
	int i = 0;
	
	while (true) {
		cin >> a[i] >> b[i];
		if (a[i] == 0 && b[i] == 0) {
			break;
		}
		i++;
	}

	for (int j = 0;j < i;j++) {
		cout << a[j] + b[j]<<'\n';
	}
}