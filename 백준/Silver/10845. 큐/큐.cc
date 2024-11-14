#include <iostream>
#include <queue>
using namespace std;

int main() {
	queue<int>q;
	int num;
	cin >> num;
	string command;
	int n;
	int result = 0;

	for (int i = 0; i < num; i++) {
		cin >> command;

		if (command == "push") {
			cin >> n;
			q.push(n);
		}
		else if (command == "pop") {
			if (q.size() != 0) {
				result = q.front();
				cout << result << endl;
				q.pop();
			}
			else {
				result = -1;
				cout << result << endl;
			}
		}
		else if (command == "size") {
			cout << q.size()<<endl;
		}
		else if (command == "empty") {
			if (q.size() == 0) {
				result = 1;
				cout << result << endl;
			}
			else {
				result = 0;
				cout << result << endl;
			}
		}
		else if (command == "front") {
			if (q.size() != 0) {
				result = q.front();
				cout << result << endl;
			}
			else {
				result = -1;
				cout << result << endl;
			}
		}
		else if (command == "back") {
			if (q.size() != 0) {
				result = q.back();
				cout << result << endl;
			}
			else {
				result = -1;
				cout << result << endl;
			}
		}
	}
	
}