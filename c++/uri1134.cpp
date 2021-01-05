#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, gas {0}, alcool {0}, diesel {0};
	
	while (n != 4) {
	
		cin >> n;
	
		while (n < 1 || n > 4) {
			cin >>  n;
		}
		if (n == 1) {
			alcool += 1;
		} else if (n == 2) {
			gas += 1;
		} else if (n == 3) {
			diesel += 1;
		}
	}
	cout << "MUITO OBRIGADO\n";
	cout << "Alcool: " << alcool << "\n";
	cout << "Gasolina: " << gas << "\n";
	cout << "Diesel: " << diesel << "\n";
	return 0;
	
}
