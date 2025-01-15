#include<iostream>
#include <vector>
using namespace std;

int main() {
	int n, x;
	cin >> n >> x;
	vector<int> a(n);
	vector<int> b(n);
	int j = 0;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		if (a[i] < x) {
			b[j] = a[i];
			j++;
		}
	}
	for (int k = 0; k < j; k++) {
		cout<<b[k]<<" ";
	}
}