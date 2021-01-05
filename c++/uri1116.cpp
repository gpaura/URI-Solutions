#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, x, y;
	cin >> n;
	for  (int i = 0; i < n; i++){
		cin >> x >> y;	
		if (y == 0) cout << "divisao impossivel\n";
		else printf("%.1f\n", ((float)x / (float)y));
	}
	return 0;
 }



