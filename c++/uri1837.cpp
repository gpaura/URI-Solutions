#include <bits/stdc++.h>
using namespace std;

int main() {
	int a, b, r, q;
	
	cin >> a >> b;
	
	q = a / b;
	r = a % b;
	
	if (a < 0) {
		if (b > 0 && abs(a) > abs(b)) {
			if (abs(a % b) != 0) {
				q = a / b - 1;
				r = -(q * b) + a; 
			} else {
				q = a / b;
				r = -(q*b) + a;
			}
		}
		if (b > 0 && abs(a) < abs(b)) {
			q = - 1;
			r = b + a;
		}
		if (b < 0 && abs(a) < abs(b)) {
			q = 1;
			r = -(b) + a;
		}
		if (b < 0 && abs(a) > abs(b)) {
			if (abs(a % b) != 0) {
				q = a / b + 1;
				r = -(q * b) + a;
			} else {
				q = a / b;
				r = -(q * b) + a;
			}
		}
	}

	cout << q << " " << r << "\n";
	return 0;
}
