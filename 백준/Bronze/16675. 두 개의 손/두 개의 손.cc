#include <iostream>
#include <vector>
using namespace std;

int game(char a,char b) {
	if (a == b) {
		return 0;
	}
	else if ((a == 'R' && b == 'S') || (a == 'S' && b == 'P') || (a == 'P' && b == 'R')) {
		return 1;
	}
	else {
		return -1;
	}
}

int main() {
	char M1, M2, T1, T2;
	cin >> M1 >> M2 >> T1 >> T2;
	if (M1 == M2 || T1 == T2) {
		if (M1 == T1 && M2 == T2)
			cout << "?";
		else if (M1 == M2) {
			if (game(M1, T1) == -1 || game(M1, T2) == -1) {
				cout << "TK";
			}
			else if ((game(M1, T1) == 1 && game(M1, T2) == 0) || (game(M1, T1) == 0 && game(M1, T2) == 1)) {
				cout << "?";
			}
			else {
				cout << "MS";
			}
		}
		else {
			if (game(T1, M1) == -1 || game(T1, M2) == -1) {
				cout << "MS";
			}
			else if ((game(T1, M1) == 1 && game(T1, M2) == 0) || (game(T1, M1) == 0 && game(T1, M2) == 1)) {
				cout << "?";
			}
			else {
				cout << "TK";
			}
		}
	}
	else {
		cout << '?';
	}
}