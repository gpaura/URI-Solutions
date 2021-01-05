#include <bits/stdc++.h>
using namespace std;

int main() {
	int x, y, sum;

	cin >> x >> y;

	if (x > y) {
		for (int i = y + 1; i < x; i++) {
			if (i % 5 == 2 || i % 5 == 3) cout << i << "\n";
		}
	} else {
		for (int i = x + 1; i < y; i++) {
			if (i % 5 == 2 || i % 5 == 3) cout << i << "\n";
		}
	}
}
