#include <bits/stdc++.h>
using namespace std;

int main() {
	int idade;
	double soma{0.0}, cont{0.0};
	cin >> idade;
	while (idade > 0) {
		cont += 1;
		soma += idade;
		cin >> idade;
	}
	cont *= 1.0;
	cout << fixed << setprecision(2);
	cout << soma / cont << endl;

	return 0;
}

