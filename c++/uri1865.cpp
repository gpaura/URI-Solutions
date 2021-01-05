#include <bits/stdc++.h>
using namespace std;

int main() {
	int C, power;
	string name;
	
	cin >> C;
	for (int i = 0; i < C; i++) {
		cin >> name >> power;
		if (name == "Thor") cout << "Y" << "\n";
		else cout << "N" << "\n";
	}

	return 0;
}
