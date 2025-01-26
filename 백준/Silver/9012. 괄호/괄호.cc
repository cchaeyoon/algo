#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int t;
	cin >> t;

	for (int i = 0; i < t; i++) {
		stack<int> s;
		string ss;
		cin >> ss;
		for (int j = 0; j < ss.length(); j++) {
			if (s.empty() == 1) {
				s.push(ss[j]);
			}
			else {
				if (s.top() == '(' && ss[j] == ')') {
					s.pop();
				}
				else {
					s.push(ss[j]);
				}
			}
		}
		if (s.empty() == 1) {
			cout << "YES" << '\n';
		}
		else {
			cout << "NO" << '\n';
		}
	}
}