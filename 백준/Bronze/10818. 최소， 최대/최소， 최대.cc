#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int i, tmp;
	cin >> i;
	vector<int> number(i);

	for (int j = 0;j < i;j++) {
		cin >> number[j];
	}
	sort(number.begin(), number.end());

	cout << number[0] << " " << number[i-1];
}