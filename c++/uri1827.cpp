#include <bits/stdc++.h>
using namespace std;

int main() {
	int N;
	int i{0}, j{0}, k{0}, l{0};

	while (cin >> N) {
		int M[N][N];
		for (i = 0; i < N; i++) {
			for (j = 0; j < N; j++) {
				M[i][j] = 0;
				if (i == j) M[i][j] = 2;
				if (i + j == N - 1) M[i][j] = 3;
				
				for (k = N / 3; k < N - N / 3; k++) {
					for (l = N / 3; l < N - N / 3; l++) {
						M[k][l] = 1;
						if (i == j && i + j == N - 1) M[i][j] = 4;
					}
				}

				cout << M[i][j];
			}
			cout << "\n";
		}
		cout << "\n";
	}
	return 0;
}
