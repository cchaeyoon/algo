#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	string str;
	while (true) {
		stack <char> s;
		string result="yes";
		getline(cin, str);
		if (str == ".") {
			break;
		}

		for (int i = 0; i < str.size(); i++) {
			if (str[i] == '(' || str[i] == '[') {
				s.push(str[i]);
			}
			else if (str[i] == ')') {
				if (s.empty() || s.top() != '(') {
					result = "no";
					break;
				}
				else if (s.top() == '(') {
					s.pop();
				}
			}
			else if (str[i] == ']') {
				if (s.empty() || s.top() != '[') {
					result = "no";
					break;
				}
				else if (s.top() = '[') {
					s.pop();
				}
			}
		}
		if (!s.empty()) {
			result = "no";
		}
		cout << result << '\n';
		if (str.back() == '.') {
			continue;
		}
	}
	return 0;
}