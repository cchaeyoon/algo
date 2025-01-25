#include <iostream>
#include <queue>
#include <string>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n;
	cin >> n;
	queue<int>q;
	string command;
	int x;

	for (int i = 0; i < n; i++) {
		cin >> command;
		if (command == "push") {
			cin >> x;
			q.push(x);
		}
		else if (command == "pop") {
			if (q.empty() == 1) {
				cout << -1<<'\n';
			}
			else {
				cout << q.front()<<'\n';
				q.pop();
			}
		}
		else if (command == "size") {
			cout << q.size()<<'\n';
		}
		else if (command == "empty") {
			if (q.empty() == 1) {
				cout << 1<<'\n';
			}
			else {
				cout << 0<<'\n';
			}
		}
		else if (command == "front") {
			if (q.empty() == 1) {
				cout << -1<<'\n';
			}
			else {
				cout << q.front()<<'\n';
			}
		}
		else if (command == "back") {
			if (q.empty() == 1) {
				cout << -1<<'\n';
			}
			else {
				cout << q.back()<<'\n';
			}
		}
	}
}