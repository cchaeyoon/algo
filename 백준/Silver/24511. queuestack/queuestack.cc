#include <iostream>
#include <vector>
#include <deque>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;
	deque<int>d;
	vector<int>v(n);

	for (int i = 0; i < n; i++) {    //큐인지 스택인지 입력
		cin >> v[i];
	}
	int value;
	for (int i = 0; i < n; i++) {
		cin >> value;
		if (v[i] == 0) {        //큐 인 경우에만 값 넣음
			d.push_back(value);
		}
	}

	int m;
	cin >> m;
	for (int i = 0; i < m; i++) {
		cin >> value;
		d.push_front(value);
		cout << d.back() << ' ';
		d.pop_back();
	}
}