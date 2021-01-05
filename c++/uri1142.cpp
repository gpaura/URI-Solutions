#include <bits/stdc++.h>
using namespace std;

int main() {
	int num {1}, N, i {0};
	cin >> N;
	for (i; i < N; i++) {
		for (num; num < 4 * N; num +=4) {
			cout << num << " " << num + 1 << " " << num + 2 << " PUM\n";
		}
	}
	return 0;
}
