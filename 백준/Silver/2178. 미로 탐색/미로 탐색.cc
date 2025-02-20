#include <iostream>
#include <queue>
using namespace std;

int n, m;
int map[100][100];		// 미로 정보
bool visited[100][100];		// 방문 체크

int dx[4] = {0, 0, -1, 1};	// 상, 하, 좌, 우
int dy[4] = {-1, 1, 0, 0};

int bfs() {
	queue<pair<int, int>>q;
	queue<int> dist;	// 현재 거리 저장

	q.push({0, 0});
	dist.push(1);	// 거리 1로 시작
	visited[0][0] = 1;

	while (!q.empty()) {
		int curx = q.front().first;
		int cury = q.front().second;
		int curdist = dist.front();
		q.pop();
		dist.pop();

		if (curx == n - 1 && cury == m - 1){
			return curdist;
		}

		for (int i = 0; i < 4; i++) {
			int nx = curx + dx[i];
			int ny = cury + dy[i];

			// 범위 벗어나면 무시
			if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
			// 방문한 경우 또는 벽이면 무시
			if (visited[nx][ny] || map[nx][ny]==0) continue;

			visited[nx][ny] = 1;
			q.push({ nx, ny });
			dist.push(curdist + 1);
		}
	}
}
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	cin >> n >> m;

	for (int i = 0; i < n; i++) {
		string str;
		cin >> str;
		for (int j = 0; j < str.length(); j++) {
			map[i][j] = str[j] - '0';	// 정수로 변환
		}
	}
	cout << bfs();
	return 0;
}