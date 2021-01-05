#include <bits/stdc++.h>
using namespace std;

int main() {
	int x, y;
	cin >> x >> y;
	
	while (x != 0 || y != 0) {
		if (y > 0 && x > 0) cout << "primeiro\n";
		if (y < 0 && x < 0) cout << "terceiro\n";
		if (y > 0 && x < 0) cout << "segundo\n";
		if (y < 0 && x > 0) cout << "quarto\n";
		cin >> x >> y;
	}
	return 0;
 }


