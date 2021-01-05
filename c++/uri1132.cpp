#include <bits/stdc++.h>
using namespace std;

int main() {
	int a, b, sum {0};
	cin >> a >> b;

	if (a < b) {
		for (int i = a; i <= b; i++) {
			
			if (i % 13 != 0) sum += i;
		}		
	} else {
		for (int i = b; i <= a; i++) {
			if (i % 13 != 0) sum += i;
			
		}
	}
	cout << sum << "\n";
	return 0;
}
