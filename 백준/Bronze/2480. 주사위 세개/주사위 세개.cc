#include<iostream>
#include <vector>
using namespace std;
int main() {
	vector<int> num(3);
	int prize;
	cin >> num[0]>>num[1]>>num[2];
	int big = num[0];
	if (num[0]==num[1]&& num[1] == num[2]) {
		prize = 10000 + 1000 *num[0];
	}
	else if (num[0] == num[1] ||num[1] == num[2] || num[0] == num[2]) {
		int same;
		if (num[0] == num[1] || num[0]==num[2])
			same = num[0];
		else
			same = num[1];
		prize = 1000 + 100 * same;
	}
	else {
		for (int i = 0; i < 3; i++) {
			if (big < num[i])
				big = num[i];
		}
		prize = big * 100;
	}
	cout << prize;
}