#include <iostream>
using namespace std;

int main() {
	int arr[31] = {};
	int x;

	for (int i = 0; i < 28; i++) {
		cin >> x;
		arr[x]++;
	}
	for (int i = 1; i <= 30; i++) {
		if (arr[i] == 0)
			cout << i<<'\n';
	}
	return 0;
}