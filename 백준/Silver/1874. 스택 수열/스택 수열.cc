#include <iostream>
#include <stack>
#include<vector>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n;
	cin >> n;
	vector<int>v(n);
	stack <int> s;
	int k = 0;
	vector<char>out;

	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}

	for (int i = 1; i <= n; i++) {
		s.push(i);
		out.push_back('+');

		while (k < n && !s.empty() && s.top() == v[k]) {
			s.pop();
			out.push_back('-');
			k++;
		}
	}
	if (!s.empty()) {
		cout << "NO";
	}
	else {
		for (int i = 0; i < out.size(); i++) {
			cout << out[i] << '\n';
		}
	}
	return 0;
}