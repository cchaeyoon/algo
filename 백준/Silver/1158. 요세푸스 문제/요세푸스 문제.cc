#include <iostream>
#include <queue>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n, k;
	cin >> n >> k;
	queue<int> q;

	for (int i = 0; i < n; i++) {
		q.push(i + 1);
	}

	cout << "<";
	while (q.size() > 1) {
		for (int i = 0; i < k-1; i++) {	// k-1개 만큼 pop하고 push하면
			q.push(q.front());
			q.pop();
		}
		cout << q.front()<<", ";	// front값이 k번째, 제거
		q.pop();
	}
	cout << q.front() << ">";	// size가 1이면 while 빠져나와서 남은 한 개 출력
}