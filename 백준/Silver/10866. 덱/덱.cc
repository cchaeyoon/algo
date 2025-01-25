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
	string command;
	
	for (int i = 0; i < n; i++) {
		cin >> command;

		if (command == "push_front") {
			cin >> x;
			d.push_front(x);
		}
		else if (command == "push_back") {
			cin >> x;
			d.push_back(x);
		}
		else if (command == "pop_front") {
			if (d.empty() == 1) {
				cout << -1 << '\n';
			}
			else {
				cout << d.front()<<'\n';
				d.pop_front();
			}
		}
		else if (command == "pop_back") {
			if (d.empty() == 1) {
				cout << -1 << '\n';
			}
			else {
				cout << d.back()<<'\n';
				d.pop_back();
			}
		}
		else if (command == "size") {
			cout << d.size() << '\n';
		}
		else if (command == "empty") {
			if (d.empty() == 1) {
				cout << 1 << '\n';
			}
			else {
				cout << 0 << '\n';
			}
		}
		else if (command == "front") {
			if (d.empty() == 1) {
				cout << -1 << '\n';
			}
			else {
				cout << d.front() << '\n';
			}
		}
		else if (command == "back") {
			if (d.empty() == 1) {
				cout << -1 << '\n';
			}
			else {
				cout << d.back() << '\n';
			}
		}
	}
}