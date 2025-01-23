#include <iostream>
#include <stack>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int k;
	cin >> k;
	stack<int> s;
	int a;

	for (int i = 0; i < k; i++) {
		cin >> a;
		if (a == 0) {
			s.pop();
		}
		else {
			s.push(a);
		}
	}
	int sum = 0;
	while (!s.empty()) {
		sum += s.top();
		s.pop();
	}
	cout << sum;
}