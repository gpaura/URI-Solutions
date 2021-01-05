#include <bits/stdc++.h>
using namespace std;

int main() {
	double M[12][12], num, sum {0};
	int L;
	char T;
	cin >> L;
	cin >> T;
	for (int i = 0; i < 12; i++) {
		for (int j = 0; j < 12; j++) {
			cin >> num;
			M[i][j] = num;
		}
	}
	if (T == 'S') {
		for (int k = 0; k < 12; k++) {
			sum += M[L][k];
		}
	} else {
		for (int k = 0; k < 12; k++) {
			sum += M[L][k];
		}
		sum = sum / 12.0;
	}
	
	cout << fixed << setprecision(1);
	cout << sum << "\n";
	
	return 0;
}
