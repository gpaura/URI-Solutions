#include <bits/stdc++.h>
using namespace std;

int main() {
	int N;
	int i, j;
	int M[100][100];

	while (cin >> N && N != 0) {

		for (i = 0; i < N; i++) {
		
			for (j = 0; j < N; j++) {
				
				if (i == j)
					M[i][j] = 1;
				if (i > j)
					M[i][j] = i - j + 1;
				if (i < j)
					M[i][j] = j - i + 1;
			}
		}

		for (i = 0; i < N; i++) {
		
			for (j = 0; j < N; j++) {
			
				if (j == 0)
					cout << setw(3) << M[i][j];
				else
					cout << " " << setw(3) << M[i][j];
			}
			cout << "\n";
		}
		cout << "\n";
	}
	return 0;
}

