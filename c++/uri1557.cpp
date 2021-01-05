#include <bits/stdc++.h>
using namespace std;

int main() {
	int N;
	while (cin >> N && N != 0) {
		int M[N][N];
		int j{0};

		for (int i = 0; i < N; i++) {
		
			M[i][j] = pow(2, i);
			
			for (int j = 1; j < N; j++) {
				M[i][j] = M[i][j-1] * 2;
			}
		}
		for (int i = 0; i < N; i++) {
		
			for (int j = 0; j < N; j++) {
			
				if (j == 0)
					cout << setw(to_string(M[N-1][N-1]).length()) << M[i][j];
				else
					cout << " " << setw(to_string(M[N-1][N-1]).length()) << M[i][j];
			}
			cout << "\n";
		}
		cout << "\n";
		
	}
	return 0;
}
