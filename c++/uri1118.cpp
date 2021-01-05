#include <bits/stdc++.h>
using namespace std;

int main() {
	double n1, n2, med;
	int x = 1;

	while (x != 2) {

		cin >> n1;
		while (n1 < 0 || n1 > 10) {
			cout << "nota invalida\n";
			cin >> n1;
		}
		cin >> n2;
		while (n2 < 0 || n2 > 10) {
			cout << "nota invalida\n";
			cin >> n2;
		}
		med = (n1 + n2) / 2.00;
		printf("media = %.2f\n", med);
		cout << "novo calculo (1-sim 2-nao)\n";
		cin >> x;
		while (x < 1 || x > 2) {
			cout << "novo calculo (1-sim 2-nao)\n";
			cin >> x;
		}
		}

	return 0;
}
