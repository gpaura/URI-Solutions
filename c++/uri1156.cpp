#include <bits/stdc++.h>
using namespace std;

int main() {
	int i; 
	double sum {0};
	for (i = 1; i <= 18; i+=1) {
		sum += (1 + (i - 1)* 2.00) / pow(2, i-1);
	}
	cout << fixed << setprecision(2);
	cout << sum << endl;

	return 0;
}
