#include <iostream>
#include <string>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	string s;
	cin >> s;
	string alph = "abcdefghijklmnopqrstuvwxyz";

	for (int i = 0; i < alph.length(); i++) {
		cout << (int)s.find(alph[i]) << " ";
	}
}