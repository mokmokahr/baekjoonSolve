#include <iostream>
using namespace std;

bool compare(int a,int b){
	return a < b;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int T;
	cin >> T;
	while (T--) {
		int N;
		cin >> N;
		int arr[1001] = { 0 };
		for (int i = 0; i < N; i++) {
			int a;
			cin >> a;
			arr[a]++;
		}
		int max = 0;
		for (int i = 1; i < 1001; i++) {
			if (max < arr[i]) max = arr[i];
		}
		for (int i = 1; i < 1001; i++) {
			if (max == arr[i]) {
				cout << i << "\n";
				break;
			}
		}
	}
}
