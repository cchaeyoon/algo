#include <iostream>
using namespace std;

int main() {
	int n, m;
	cin >> n >> m;
	if (m == 1 || m == 2) {
		cout << "NEWBIE!";
	}
	else if (m <= n && m != 1 && m != 2) {
		cout << "OLDBIE!";
	}
	else
		cout << "TLE!";
}