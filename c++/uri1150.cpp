#include <bits/stdc++.h>
using namespace std;

int main() {
	int X, Z, cont {0}, j {0};
	cin >> X;
	cin >> Z;
	while (Z <= X) {
		cin >> Z;
	}
	for (int i = X; i <= Z; i++) {
		if (j < Z) {
			j += i;
			cont += 1;
		} else {
			break;
		}
	}
	cout << cont << "\n";
	return 0;
}
