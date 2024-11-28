//백준 10950번
#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n;
	cin >> n;
	int n1, n2, sum;
	vector<int> num;
	for (int i = 0; i < n; i++) {
		cin >> n1 >> n2;
		sum = n1 + n2;
		num.push_back(sum);
	}
	for (int i = 0; i < n; i++) {
		cout << num[i];
		cout << endl;
	}
}