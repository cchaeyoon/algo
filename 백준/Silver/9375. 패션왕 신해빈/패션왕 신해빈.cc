#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int t;
	cin >> t;

	for (int i = 0; i < t; i++) {
		int n;
		cin >> n;
		map<string, int>m;

		string cat, name;
		for (int i = 0; i < n; i++) {
			cin >> name >> cat;
			if (m.find(cat) == m.end()) {	// key값 없으면 1 삽입
				m.insert({ cat, 1 });
			}
			else {
				m[cat]++;
			}
		}

		int ans = 1;
		for (auto i = m.begin(); i != m.end(); i++) {
			ans *= (i->second + 1);		// 안 입은 경우까지 +1 하고 전체적으로 곱함
		}
		ans -= 1;		// 모두 안 입은 경우 뺌
		cout << ans << '\n';
	}
	return 0;
}