#include <bits/stdc++.h>
using namespace std;

int main() {
	double M[12][12];
	double num;
	double sum{0};
	char O;
	int cont {0};

	cin >> O;

	for (int i = 0; i < 12; i++) {
		for (int j = 0; j < 12; j++) {
			cin >> num;
			M[i][j] = num;
			if (j > i) {
				sum += M[i][j];
				cont += 1;
			}
		}
	}
	cout << fixed << setprecision(1);

	if (O == 'S') cout << sum << "\n";
	else cout << sum / cont << "\n";

	return 0;
}


