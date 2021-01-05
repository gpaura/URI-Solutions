#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int even[5], odd[5];
	int j{0}, k{0}, l{0}, num;
	
	for (int i = 0; i < 15; i++) {
		cin >> num;
		if (num % 2 == 0) { 
			even[j] = num;
			j++;
			
		} else {
			odd[k] = num;
			k++;
		}
		
		if (j == 5) {
			for (int l = 0; l < 5; l++) {
				cout << "par[" << l << "] = " << even[l] << "\n";
			}
			j = 0;	
		}
		
		if (k == 5) {
			for (int l = 0; l < 5; l++) {
				cout << "impar[" << l << "] = " << odd[l] << "\n";
			}
			k = 0;
		}

		if (i == 14) {
			int zerando = 0;
			while (zerando < k) {
				cout << "impar[" << zerando << "] = " << odd[zerando] << "\n";
				zerando++;
			}
			zerando = 0;
			while(zerando < j) {
			    cout << "par[" << zerando << "] = " << even[zerando] << "\n";
				zerando++;
			}
		}
	}
	return 0;
}
