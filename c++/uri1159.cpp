#include <bits/stdc++.h>
using namespace std;

int main() {
	int X, sum {0};
	cin >> X;

	while (X != 0) {
			
		if (X % 2 == 0) {
			for (int i = 1; i <= 5; i++) {
				sum += X;
				X += 2;
			}
		cout << sum << "\n";
		sum = 0;
		} else {
			X += 1;
			for (int i = 1; i <= 5; i++) {
				sum += X;
				X += 2;
			}
		cout << sum << "\n";
		sum = 0;
		}
		cin >> X;
	}
	return 0;
}
