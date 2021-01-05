#include <bits/stdc++.h>
using namespace std;

int main() {
	int N;
	int cont{0};
	int mid;
	int M[100][100];
	int bot;
	int i, j;

	while (cin >> N && N != 0) {
		
		mid = (N % 2 == 0 ? N/2 : (N/2)+1);  

		for (i = 0; i < mid; i++) {
			
			bot = (N - 1) - i;
			
			for (j = i; j <= bot; j++){
				M[i][j] = i + 1;
				M[bot][j] = i + 1;
				M[j][i] = i + 1;
				M[j][bot] = i + 1;
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
