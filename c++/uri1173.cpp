#include <bits/stdc++.h>
using namespace std;

int main() {
	int V, N[10];
	
	cin >> V;
	N[0] = V;

	cout << "N[" << 0 << "] = " << N[0] << "\n";
	for (int i = 1; i < 10; i++) {
		N[i] = 2 * N[i-1];
		cout << "N[" << i << "] = " << N[i] << "\n";
	}
	return 0;
}
