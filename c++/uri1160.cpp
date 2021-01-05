#include <bits/stdc++.h>
using namespace std;

int main() {
	long long T, PA, PB, anos;
	float G1, G2;

	cin >> T;
	
	for (int i = 1; i <= T; i++) {
		anos = 0;
		cin >> PA >> PB >> G1 >> G2;		
			
		while (PA <= PB) {
			PA += PA * G1 / 100;
			PB += PB * G2 / 100;
			anos++;
			
			if(anos > 100) {
				cout << "Mais de 1 seculo." << "\n";
				break;
			}
		}
		if (anos <= 100) { 
			cout << anos << " anos." << "\n";
		}
	}

	
	return 0;
}
