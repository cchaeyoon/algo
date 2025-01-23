#include <iostream>
#include <stack>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	stack<int>s;
	int n;
	cin >> n;
	int c, x;

	for (int i = 0; i < n; i++) {
		cin >> c;
		if (c == 1) {
			cin >> x;
			s.push(x);
		}
		else if (c == 2) {
			if (s.empty() == 1)
				cout << -1 << '\n';
			else {
				cout << s.top()<<'\n';
				s.pop();
			}
		}
		else if (c == 3) {
			cout << s.size()<<'\n';
		}
		else if (c == 4) {
			if (s.empty() == 1)
				cout << 1 << '\n';
			else
				cout << 0 << '\n';
		}
		else if(c==5){
			if (s.empty()==0)
				cout << s.top() << '\n';
			else
				cout << -1 << '\n';
		}
	}
}