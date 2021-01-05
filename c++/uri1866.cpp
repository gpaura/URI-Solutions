#include <bits/stdc++.h>
using namespace std;

int main() {
	int C, N, sum{0};
	
	cin >> C;

	for (int i = 0; i < C; i++) {
		cin >> N;
		for (int j = 0; j < N; j++) {
			if (j % 2 != 0) sum -= 1;
			else sum += 1;
		}
		cout << sum << "\n";
		sum = 0;
	}
	
	return 0;
}
