#include <bits/stdc++.h>
using namespace std;

int main() {
	long long T, N[60], x, F[61], a{0}, b{1}, c{0};
	F[0] = 0;
	F[1] = 1;
	
	for (int j = 2; j <= 60; j++) {
		c = a + b;
		a = b;
		b = c;
		F[j] = c;
	}

	cin >> T;

	for (int i = 0; i < T; i++) {
		cin >> x;		
		cout << "Fib(" << x << ") = " << F[x] << "\n";
	}
}
