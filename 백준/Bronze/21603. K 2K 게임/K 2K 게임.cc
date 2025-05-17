#include <iostream>
#include <vector>
using namespace std;



int main() {
	int N, K;
	cin >> N >> K;
	vector <int> v;
	K = K % 10;
	int K1 = (K * 2)%10;
	for (int i = 1; i <= N; i++) {
		if (i%10 != K && i%10 != K1) {
			v.push_back(i);
		}
	}
	cout << v.size()<<endl;
	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << " ";
	}
}