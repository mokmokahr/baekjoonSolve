#include <iostream>
#include <vector>
using namespace std;

int arr[50][50];
int w = 1, h = 1;

void dfs(int a,int b) {
	int iLen,jLen,iStart,jStart;
	arr[a][b] = 0;
	if (a - 1 >= 0 && a+1<h) {
		iStart = a - 1;
		iLen = 3;
	}
	else if (a - 1 < 0 && a + 1 < h) {
		iStart = a;
		iLen = 2;
	}
	else if (a - 1 >= 0 && a + 1 >= h) {
		iStart = a - 1;
		iLen = 2;
	}
	else {
		iStart = a;
		iLen = 1;
	}

	if (b - 1 >= 0 && b+1<w) {
		jStart = b - 1;
		jLen = 3;
	}
	else if (b - 1 < 0 && b + 1 < w) {
		jStart = b;
		jLen = 2;
	}
	else if (b - 1 >= 0 && b + 1 >= w) {
		jStart = b - 1;
		jLen = 2;
	}
	else {
		jStart = b;
		jLen = 1;
	}

	for (int i = iStart; i < iStart + iLen; i++) {
		for (int j = jStart; j < jStart + jLen; j++) {
			if (arr[i][j] == 1 ) {
				dfs(i, j);
			}
		}
	}
}


int main() {
	while (w != 0 && h != 0) {
		cin >> w >> h;
		int cnt = 0;
		for (int i = 0; i < h; i++ ) {
			for (int j = 0; j < w; j++) {
				cin >> arr[i][j];
			}
		}
		for (int i = 0; i < h; i++) {
			for (int j = 0; j < w; j++) {
				if (arr[i][j] == 1) {
					cnt++;
					dfs(i, j);
				}
			}
		}
		if(w !=0 && h !=0) cout << cnt<<endl;
	}
}