#include <iostream>
#include <string>
using namespace std;



int main() {
	int a, b;
	cin >> a >> b;
	b = b-45;
	if (b < 0) {
		a -= 1;
		b = 60 + b;
	}
	if (a < 0) {
		a = 23;
	}
	cout << a << " " << b;
}