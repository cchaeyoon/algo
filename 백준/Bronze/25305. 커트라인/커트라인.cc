#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool myfunction(int i, int j) { return (i > j); }
int main() {
	int stu, award; //stu=5, award=2
	cin >> stu >> award;
	int score[1000] = {};
	for (int i = 0; i < stu; i++) {
		cin >> score[i]; //100 76 85 93 98
	}
	vector<int>myvector(score, score + stu); //score의 index 0부터 4까지
	vector<int>::iterator it;
	sort(myvector.begin(), myvector.end(), myfunction);
	cout << myvector[--award];
}