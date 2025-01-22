#include <iostream>
#include <string>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	string a, b;
	cin >> a >> b;
	
	int reA = (a[2] - '0') * 100 + (a[1] - '0') * 10 + (a[0]-'0');
	int reB = (b[2] - '0') * 100 + (b[1] - '0') * 10 + (b[0]-'0');
	
	if (reA > reB) {
		cout << reA;
	}
	else
		cout << reB;
}