#include <iostream>
#include <vector>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n;
	cin >> n;
	vector<int> arr(n);
	int prime = 0;

	for (int i = 0; i < n; i++) {
		int flag = 1;
		cin >> arr[i];

		if (arr[i] == 1) {
			flag = 0;
		}
		else {
			if (arr[i] == 2) {
				flag = 1;
			}
			for (int j = 2; j*j <= arr[i]; j++) {
				if (arr[i] % j == 0) {
					flag = 0;
					break;
				}
			}
		}
		if (flag == 1) {
			prime++;
		}
	}
	cout << prime;
}