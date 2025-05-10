#include <iostream>
#include <math.h>
using namespace std;


int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int T;
	cin >> T;
	while (T--) {
        int a, b;	
        cin >> a >> b;
		long long x = a + b;
		cout << x*x*(x-1)/ 2 << "\n";
	}
}
