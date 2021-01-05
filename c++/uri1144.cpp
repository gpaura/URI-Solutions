#include <bits/stdc++.h>
using namespace std;

int main() {
	int N, num;
	cin >> N;
	for (num = 1; num <= N; num++) {
		cout << num << " " << num * num << " " << num * num * num << "\n";
		cout << num << " " << (num * num) + 1 << " " << (num * num * num) + 1 << "\n"; 
	}

	return 0;
}
