//백준 27889번
#include <iostream>
using namespace std;

int main() {
	string school;
	cin >> school;
	if (school == "NLCS") {
		cout << "North London Collegiate School";
	}
	else if (school == "BHA") {
		cout << "Branksome Hall Asia";
	}
	else if (school == "KIS") {
		cout << "Korea International School";
	}
	else if (school == "SJA") {
		cout << "St. Johnsbury Academy";
	}
}