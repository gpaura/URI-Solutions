#include <bits/stdc++.h>
using namespace std;

int main() {
	int N;
	string R, sheldon, raj, ans;

	while (cin >> N) {
		for (int i = 1; i <= N; i++) {
			cin >> sheldon >> raj;
			if (sheldon == raj) ans = "De novo!";
			else {
				if (sheldon == "papel") {
					if (raj == "pedra" || raj == "Spock") ans = "Bazinga!";
					else ans = "Raj trapaceou!";
				}
				if (sheldon == "pedra") {
					if (raj == "lagarto" || raj == "tesoura") ans = "Bazinga!";
					else ans = "Raj trapaceou!";
				}
				if (sheldon == "tesoura") {
					if (raj == "papel" || raj == "lagarto") ans = "Bazinga!";
					else ans = "Raj trapaceou!";
				}
				if (sheldon == "Spock") {
					if (raj == "pedra" || raj == "tesoura") ans = "Bazinga!";
					else ans = "Raj trapaceou!";
				}
				if (sheldon == "lagarto") {
					if (raj == "Spock" || raj == "papel") ans = "Bazinga!";
					else ans = "Raj trapaceou!";
				}
			}
			cout << "Caso #" << i << ": " << ans << "\n";

		}
	}
	return 0;
}
