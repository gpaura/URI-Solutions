#include <bits/stdc++.h>
using namespace std;

int main() {
	double n, x {0}, y {0};
	while (x == 0 || y == 0) {
		cin >> n;
	
		if (n >= 0 && n <= 10){
			x = n;
			if (x != 0 && y == 0) y = x, x = 0;
			else cout << "media = " << (x + y)/2 << endl; 
		} else
			cout << "nota invalida\n";
	}
	
	return 0;
}
