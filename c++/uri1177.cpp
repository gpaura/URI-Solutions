#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int N[1000], T, cont{0}, num{0};
	cin >> T;
	
	while (cont < 1000 ) {
		for (int i = 0; i < T; i++) {
			N[cont] = i;
			cout << "N[" << cont << "] = " << i << "\n";
			cont++;
			if (cont == 1000) break;
		}
	}
	return 0;
}
