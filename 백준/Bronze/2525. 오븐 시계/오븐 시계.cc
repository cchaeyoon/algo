#include <iostream>
using namespace std;

int main() {
	int hour;
	cin >> hour;
	int min;
	cin >> min;

	int time;
	cin >> time;

	int a;
	a = min + time;
	if (a >= 60) {
		int h;
		h = a / 60;

		hour = hour + h;
		if (hour >= 24) {
			hour = hour - 24;
		}

		min = a % 60;
	}
	else {
		min += time;
	}
	cout << hour << " " << min;
}