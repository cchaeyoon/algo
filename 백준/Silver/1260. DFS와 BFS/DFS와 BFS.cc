#include <iostream>
#include <queue>
using namespace std;

int n, m, v;
int map[1001][1001];
int visited1[1001];
int visited2[1001];
queue<int>q;

void DFS(int v) {
	cout << v << " ";
	for (int j = 1; j <= n; j++) {
		if (map[v][j] && visited1[j] == 0) {
			visited1[j] = 1;
			DFS(j);
		}
	}
}

void BFS(int v) {
	while (!q.empty()) {
		int v = q.front();
		cout << v << " ";
		q.pop();
		for (int j = 1; j <= n; j++) {
			if (map[v][j] && visited2[j] == 0) {
				visited2[j] = 1;
				q.push(j);
			}
		}
	}
}
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	cin >> n >> m >> v;
	
	for (int i = 0; i < m; i++) {
		int a, b;
		cin >> a >> b;
		map[a][b] = 1;
		map[b][a] = 1;
	}
	visited1[v] = 1;
	DFS(v);

	cout << '\n';

	visited2[v] = 1;
	q.push(v);
	BFS(v);
}