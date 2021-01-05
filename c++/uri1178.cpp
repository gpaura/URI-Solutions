#include <bits/stdc++.h>
using namespace std;

int main() {
	double X, N[100];
	cin >> X;
	
	for (int i = 1; i < 101; i++) {
		N[i-1] = X;
		cout << fixed << setprecision(4);
		cout << "N[" << i - 1 << "] = " << X << "\n";
		X = X / 2;
	}
	return 0;
}
