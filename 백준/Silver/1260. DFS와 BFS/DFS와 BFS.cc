#include <iostream>
#include <queue>
using namespace std;

int arr[1001][1001] = { 0 };
bool visited[1001] = {};
int N;
queue<int> q;

void dfs(int v) {
	visited[v] = true;
	cout << v << " ";
	for (int i = 1; i <= N; i++) {
		if (arr[v][i] == 1 && visited[i] == false) {
			visited[v] = true;
			dfs(i);
		}
	}
}

void bfs(int v) {
	visited[v] = true;
	q.push(v);
	while (!q.empty()) {
		int tmp = q.front();
		cout << tmp << " ";
		for (int i = 1; i <= N; i++) {
			if (visited[i] == false && arr[tmp][i]) {
				q.push(i);
				visited[i] = true;
			}
		}
		q.pop();
	}

}


int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int M,V;
	cin >> N >> M >> V;
	for (int i = 0; i < M; i++) {
		int a, b;
		cin >> a >> b;
		arr[a][b] = 1;
		arr[b][a] = 1;
	}
	dfs(V);
	cout << "\n";
	for (int i = 0; i < 1000; i++) {
		visited[i + 1] = false;
	}
	bfs(V);
}
