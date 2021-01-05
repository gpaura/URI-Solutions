#include <bits/stdc++.h>
using namespace std;

int main() {
	int N, menor, posicao{0};
	
	cin >> N;
	
	int X[N];
	
	for (int i = 0; i < N; i++) cin >> X[i];
	
	menor = X[0];
	for (int j = 1; j < N; j++) {	
		if (menor > X[j]) {
			menor = X[j];
			posicao = j;
			}
	}

	cout << "Menor valor: " << menor << "\n";
	cout << "Posicao: " << posicao << "\n";
	
	return 0;
}
