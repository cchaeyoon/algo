#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
	vector<int> num;
	int tmp;

	for (int i = 0; i < 9; i++) {
		cin >> tmp;
		num.push_back(tmp);
	}
	int big = num[0];
	int index = 0;
	for (int i = 0; i < 9; i++) {
		if (num[i] > big) {
			big = num[i];
			index = i;
		}	
	}
	cout << big << endl;
	cout << index+1;
}