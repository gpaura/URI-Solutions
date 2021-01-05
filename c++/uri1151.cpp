#include <bits/stdc++.h>
using namespace std;

int main() {
	int N, i;
	int n3, n1 {1};
	int n2 {1};
	
	cin >> N;
	cout << 0 << " " << 1 << " " << 1 << " ";

	
	for (int i = 0; i < N-4; i++) {

		n3 = n1 + n2;
		cout << n3 << " ";
		n1 = n2;
		n2 = n3;
	}
	cout << n1 + n2 << "\n";
	return 0;
}
