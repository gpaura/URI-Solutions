#include <bits/stdc++.h>
using namespace std;

int main() {
	int X[10], j{0};
	while (j < 10) {
		cin >> X[j];
		j++;
	}


	for (int i = 0; i < 10; i++) {
		if (X[i] <= 0){ 
			X[i] = 1;
		}
		cout << "X[" << i << "] = " << X[i] << "\n";  
	}
	return 0;
}
