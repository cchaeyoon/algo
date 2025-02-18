#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

bool visited1[1001];
bool visited2[1001];
vector<int>edges[1001];

void dfs(int cur) {
	visited1[cur] = 1;
	cout << cur << ' ';
	for (int& nxt : edges[cur]) {
		if (visited1[nxt]) continue;
		dfs(nxt);
	}
}

void bfs(int start) {
	queue < int>q;
	visited2[start] = 1;
	q.push(start);
	while (!q.empty()) {
		int cur = q.front();
		cout << cur << ' ';
		q.pop();
		for (int& nxt : edges[cur]) {
			if (visited2[nxt]) continue;
			visited2[nxt] = 1;
			q.push(nxt);
		}
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n, m, v;
	cin >> n >> m >> v;

	for (int i = 0; i < m; i++) {
		int tmp1, tmp2;
		cin >> tmp1 >> tmp2;
		edges[tmp1].push_back(tmp2);
		edges[tmp2].push_back(tmp1);
	}
	for (int i = 1; i <= n; i++) {
		sort(edges[i].begin(), edges[i].end());
	}
	dfs(v);
	cout << '\n';
	bfs(v);
	return 0;
}