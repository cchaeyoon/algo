#include <iostream>
#include <algorithm>
using namespace std;

bool myfunction(int i, int j) { return (i > j); }
int main() {
	int number;
	cin >> number;
	float score[1000] = {};
	float max;
	float total = 0;
	for (int i = 0; i < number; i++) {
		cin >> score[i];
	}
	sort(score, score+number, myfunction);
	max = score[0]; 
	for (int i = 0; i < number; i++) {
		score[i] = score[i] / max * 100;
		total += score[i];
	} 
	cout<<total / number;
}