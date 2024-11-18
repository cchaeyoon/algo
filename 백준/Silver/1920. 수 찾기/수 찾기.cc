//이진 탐색 binary_search
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	ios::sync_with_stdio(false);	//입출력 속도 최적화
	cin.tie(NULL);			//cin과 cout의 연결을 끊어

	int n, m, num;
	cin >> n;
	vector<int> N(n);

	for (int i = 0; i < n; i++) {
		cin >> N[i];	//벡터 N에 값 넣음
	}
	sort(N.begin(), N.end());	//N의 원소 정렬

	cin >> m;
	for (int i = 0; i < m; i++) {
		cin >> num;
		cout << (binary_search(N.begin(), N.end(), num) ? 1 : 0) << '\n';
	}
}