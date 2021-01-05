#include <bits/stdc++.h>
using namespace std;

int main() {
	int L, mid, Vi;

	while (cin >> L && L != EOF) {
		mid = 0;
		for (int i = 0; i < L; i++) {
			cin >> Vi;
			if (Vi > mid) mid = Vi;
		}
		if (mid >= 20) cout << 3 << "\n";
		if (mid >= 10 && mid < 20) cout << 2 << "\n";
		if (mid < 10) cout << 1 << "\n";
	}
	return 0;
}


