#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	int number, tmp;
	cin >> number;
	vector<int>num;

	for (int i = 0; i < number; i++) {
		cin >> tmp;
		num.push_back(tmp);
	}
	sort(num.begin(), num.end());
	for (int i = 0; i < number; i++) {
		cout << num[i]<<'\n';
	}
}