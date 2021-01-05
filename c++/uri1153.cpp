#include <bits/stdc++.h>
using namespace std;

int main() {
	int N, fac{1}, i;
	cin >> N;
	
	for (i = 1; i < N; i++) fac = fac * (N - i);
	
	cout << fac * N << "\n";
	return 0;
}
