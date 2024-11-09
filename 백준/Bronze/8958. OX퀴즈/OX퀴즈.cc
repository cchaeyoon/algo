#include <iostream>
#include <string>
using namespace std;

int main() {
	int num;
	cin >> num;
	string test[100];
	for (int i = 0; i < num; i++) {
		cin >> test[i];
	}
	for (int i = 0; i < num; i++) {
		int sum = 0;
		int total = 0;
		for (int j = 0; j < test[i].length(); j++) {
			if (test[i][j] == 'O') {
				sum++;
			}
			else {
				sum = 0;
			}
			total += sum;
		}
		cout << total;
		cout << endl;
	}
}