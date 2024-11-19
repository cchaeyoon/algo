#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool myfunction(int i, int j) { return (i > j); }
int main() {

	vector<int>card;
	vector<int>total;
	int n, number, tmp;
	cin >> n >> number;
	for (int i = 0; i < n; i++) {
		cin >> tmp;
		card.push_back(tmp);
	}
	sort(card.begin(), card.end());

	for (int i = 0; i < n - 2; i++) {
		for (int j = i + 1; j < n - 1; j++) {
			for (int k = j+1; k < n; k++) {
				tmp = card[i] + card[j] + card[k];
				if (tmp > number) {
					break;
				}
				total.push_back(tmp);
			}
		}
	}
	sort(total.begin(), total.end(), myfunction);
	cout << total[0];
}