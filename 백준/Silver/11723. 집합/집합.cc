#include <iostream>
#include <set>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int m;
	cin >> m;

	set<int> st;
	set<int>::iterator it;

	for (int i = 0; i < m; i++) {
		string command;
		int num;
		cin >> command;
		if (command == "add") {
			cin >> num;
			st.insert(num);
		}
		else if (command == "remove") {
			cin >> num;
			st.erase(num);
		}
		else if (command == "check") {
			cin >> num;
			if (st.find(num)==st.end()) {
				cout << 0 << '\n';
			}
			else {
				cout << 1 << '\n';
			}
		}
		else if (command == "toggle") {
			cin >> num;
			if (st.find(num) == st.end()) {
				st.insert(num);
			}
			else {
				st.erase(num);
			}
		}
		else if (command == "all") {
			st = { 1,2 ,3 ,4 ,5, 6, 7, 8,9,10,11,12,13,14,15,16,17,18,19,20 };
		}
		else if (command == "empty") {
			st.clear();
		}
	}
}