#include <bits/stdc++.h>
using namespace std;

int main() {
	int A, B, C, D, mid{0};
	
	cin >> A >> B >> C >> D;

	for ( int i = 0; i < 4; i++) {
		
		for (int j = 1; j < 4; j++){
			if (A > D){
				mid = D;
				D = A;
				A = mid;
			}
			if (A > C){
				mid = C;
				C = A;
				A = mid;
			}
			if (A > B){
				mid = B;
				B = A;
				A = mid;
			}
			if (B > D){
				mid = D;
				D = B;
				B = mid;
			}
			if (B > C){
				mid = C;
				C = B;
				B = mid;
			}
			if (C > D){
				mid = D;
				D = C;
				C = mid;
			}
		}
	}
	int e = A + B;
	int f = B + C;

	if (D < f || C < e) cout << "S" << "\n";
	else cout << "N" << "\n";
	
	return 0;
}

