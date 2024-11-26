//백준 28444번
#include <iostream>
using namespace std;

int main() {
	int h, i, a, r, c;
	int sum;
	cin >> h >> i >> a >> r >> c;
	sum = (h * i) - (a * r * c);
	cout << sum;
}