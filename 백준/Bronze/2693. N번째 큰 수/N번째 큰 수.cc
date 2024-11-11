#include <iostream>
#include <algorithm>
using namespace std;

bool myfunction(int m, int n) { return (m > n); }
int main() {
	int number;
	cin >> number;
	int score[1000][10] = {};
	for (int i = 0; i < number; i++) {
		for (int j = 0; j < 10; j++) {
			cin >> score[i][j];
		}
	}
	for (int i = 0; i < number; i++) {
		sort(score[i], score[i] + 10, myfunction);
		cout << score[i][2]<<" ";
		cout << endl;
	}
}