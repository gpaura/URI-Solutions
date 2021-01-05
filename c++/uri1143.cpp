#include <bits/stdc++.h>
using namespace std;

int main() {
	int N, num;
	cin >> N;
	for (int num = 1; num <= N; num++) {
		cout << num << " " << num * num << " " << num * num * num << "\n";
	}
	return 0;
}
