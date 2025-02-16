#include <iostream>
#include <set>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int a, b;
	cin >> a >> b;

	set<int>A, B;
	int tmp;

	for (int i = 0; i < a; i++) {
		cin >> tmp;
		A.insert(tmp);
	}
	for (int i = 0; i < b; i++) {
		cin >> tmp;
		B.insert(tmp);
	}

	set<int>AminB, BminA;

	for (auto it = A.begin(); it != A.end(); it++) {
		if (B.find(*it) == B.end()) {
			AminB.insert(*it);
		}
	}
	for (auto it = B.begin(); it != B.end(); it++) {
		if (A.find(*it) == A.end()) {
			BminA.insert(*it);
		}
	}
	cout << AminB.size() + BminA.size();
	return 0;
}