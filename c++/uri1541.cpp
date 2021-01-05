#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int A, B, C;

	while (cin >> A >> B >> C && A != 0) {
		
		int Valor = A * B * 100 / C;
		cout << int(sqrt(Valor)) << "\n";

	}
	return 0;
}
