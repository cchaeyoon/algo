#include <iostream>
#include <deque>
#include <string>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n, x;
	cin >> n;
	deque<int>d;
	int command;
	
	for (int i = 0; i < n; i++) {
		cin >> command;
		if (command == 1) {
			cin >> x;
			d.push_front(x);
		}
		else if (command == 2) {
			cin >> x;
			d.push_back(x);
		}
		else if (command == 3) {
			if (d.empty() == 1) {
				cout << -1 << '\n';
			}
			else {
				cout << d.front() << '\n';
				d.pop_front();
			}
		}
		else if (command == 4) {
			if (d.empty() == 1) {
				cout << -1 << '\n';
			}
			else {
				cout << d.back() << '\n';
				d.pop_back();
			}
		}
		else if (command == 5) {
			cout << d.size() << '\n';
		}
		else if (command == 6) {
			if (d.empty() == 1) {
				cout << 1 << '\n';
			}
			else {
				cout << 0 << '\n';
			}
		}
		else if (command == 7) {
			if (d.empty() == 1) {
				cout << -1 << '\n';
			}
			else {
				cout << d.front()<<'\n';
			}
		}
		else if (command == 8) {
			if (d.empty() == 1) {
				cout << -1 << '\n';
			}
			else {
				cout << d.back()<<'\n';
			}
		}
	}
}