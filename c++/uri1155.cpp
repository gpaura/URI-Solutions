#include <bits/stdc++.h>
using namespace std;

int main() {
	int i;
	double sum {0};

	for (i = 1; i <= 100; i++) {
		sum += 1.00 / i;
	}
	cout << fixed << setprecision(2);
	cout << sum << endl;

	return 0;
}
