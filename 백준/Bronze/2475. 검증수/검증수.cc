#include<iostream>
using namespace std;

int main() {
	int arr[5] = {};
	int num;
	int sum = 0;

	for (int i = 0; i < 5; i++) {
		cin >> num;
		arr[i] = num * num;
	}
	for (int i = 0; i < 5; i++) {
		sum += arr[i];
	}
	cout << sum % 10;
}