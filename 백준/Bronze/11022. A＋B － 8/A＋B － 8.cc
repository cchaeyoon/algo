#include <iostream>
using namespace std;

int main() {
	int number;
	int num1[100] = {};
	int num2[100] = {};
	cin >> number;
	for (int i = 0; i < number; i++) {
		cin >> num1[i] >> num2[i];
	}
	for (int i = 0; i < number; i++) {
		cout << "Case #" << i + 1 << ": " << num1[i] << " + " << num2[i] << " = " << num1[i] + num2[i];
		cout << endl;
	}
}