#include <iostream>
#include <string>
#include <list>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	list<string>li;
	string s;
	cin >> s;
	for (int i = 0; i < s.length(); i++) {
		li.push_back(string(1, s[i]));		//입력받은 string을 list에 넣기
	}

	int m;
	cin >> m;

	string inst;
	auto it = li.end();
	string newLetter;

	for (int i = 0; i < m; i++) {
		cin >> inst;
		if (inst == "L") {
			if (it != li.begin()) {
				it--;
			}
		}
		else if (inst == "D") {
			if (it != li.end()) {
				it++;
			}
		}
		else if (inst == "B") {
			if (it != li.begin()) {
				it--;
				it = li.erase(it);
			}
		}
		else if (inst == "P") {
			cin >> newLetter;
			li.insert(it, newLetter);
		}
	}

	for (auto i : li) {
		cout << i;
	}
}