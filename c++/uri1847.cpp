#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int A, B, C;

	cin >> A >> B >> C;

	if (A > B && B <= C) cout << ":)" << "\n";
	if (A < B && B >= C) cout << ":(" << "\n";
	if (A < B && B < C) {
		if (C - B < B - A) cout << ":(" << "\n"; 
		if (C - B >= B - A) cout << ":)" << "\n";
	}
	if (A > B && B > C ) {
		if (B - C < A - B) cout << ":)" << "\n";
		if (B - C >= A - B) cout << ":(" << "\n";
	}
	if (A == B) {
		if (B < C) cout << ":)" << "\n";
		else cout << ":(" << "\n";
	}

	return 0;

}
