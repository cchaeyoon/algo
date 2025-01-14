#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<int> a(100), b(100);
	int i = 0;

	while (1) {
		cin >> a[i] >> b[i];
		if (cin.eof()) {
			break;
		}
		i++;
	}
	for (int j = 0;j < i;j++) {
		cout << a[j] + b[j] << '\n';
	}
}