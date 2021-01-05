#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	ll QT, N, M;
	string name, paridade, name2, paridade2;

	cin >> QT;

	for (int i = 0; i < QT; i++) {
		cin >> name >> paridade >> name2 >> paridade2;
		cin >> N >> M;
		
		ll sum = N + M;
		
		if (sum % 2 == 0) {
			if (paridade == "PAR") cout << name << "\n";
			else cout << name2 << "\n";
		} else {
			if (paridade == "IMPAR") cout << name << "\n";
			else cout << name2 << "\n";
		}
	}
	return 0;
}
