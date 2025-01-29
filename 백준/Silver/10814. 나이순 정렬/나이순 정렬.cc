#include <iostream>
#include <utility>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

bool cmp(pair<int, string> a, pair<int, string> b) {
	return a.first < b.first;	//나이가 작은 것을 우선적으로 정렬
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;
	pair<int, string> tmp;
	vector<pair<int, string>> p;


	for (int i = 0; i < n; i++) {
		cin >> tmp.first >> tmp.second;
		p.push_back(tmp);
	}

	stable_sort(p.begin(), p.end(), cmp);	//stable_sort는 안정 정렬(정렬을 했을 때 중복된 값들의 순서가 변하지 않음)

	for (int i = 0; i < n; i++) {
		cout << p[i].first<<' '<<p[i].second<< '\n';
	}
}