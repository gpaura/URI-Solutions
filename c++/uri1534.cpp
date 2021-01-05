#include <bits/stdc++.h>
using namespace std;

int main() {
	int N;

	while (cin >> N && N != EOF) {
		int M[69][69];

		for (int i = 0; i < N; i++) {
			for (int j = 0; j < N; j++) {			
				if (i + j == N - 1) cout << 2;
				else if (i == j) cout << 1;
				else cout << 3;	
			}
			cout << "\n";
		}
	}
	return 0;
}
