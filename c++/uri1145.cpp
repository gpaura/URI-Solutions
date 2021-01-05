#include <bits/stdc++.h>
using namespace std;

int main() {
	int X, Y, i{1}, cont{0};
	cin >> X >> Y;
	while (X > Y) {
		cin >> X >> Y;
	}
	for (i; i <= Y; i++) {
		if (cont < X - 1) {
			cout << i << " ";
			cont += 1;
		} else {
			cout << i << "\n";
			cont = 0;
		}
	}
	return 0;
}
