#include <bits/stdc++.h>
using namespace std;

int main() {
	double M[12][12];
	double num;
	double sum{0};
	int C;
	char T;

	cin >> C;
	cin >> T;

	for (int i = 0; i < 12; i++) {
		for (int j = 0; j < 12; j++) {
			cin >> num;
			M[i][j] = num;

			if (j == C) sum += M[i][C];
		}
	}
	if (T == 'S') {
		cout << fixed << setprecision(1);
		cout << sum << "\n";
	} else {
		cout << fixed << setprecision(1);
		cout << sum / 12.0 << "\n";
	}

	return 0;
}
