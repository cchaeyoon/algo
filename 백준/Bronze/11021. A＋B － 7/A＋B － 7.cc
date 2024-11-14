#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int num1[100] = {};
	int num2[100] = {};
	for (int i = 0; i < n; i++) {
		cin >> num1[i] >> num2[i];
	}
	for (int i = 0; i < n; i++) {
		cout << "Case #" << i + 1 << ": " << num1[i] + num2[i]<<endl;
	}
}