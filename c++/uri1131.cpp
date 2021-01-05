#include <bits/stdc++.h>
using namespace std;

int main() {
	int	emp {0}, x {0}, y {0}, inter {0}, gremio {0};
	int yes {1}, interwin {0}, gremiowin {0}, grenais {0};
	while (yes == 1) {
		cin >> inter >> gremio;
		grenais += 1;

		if (inter < gremio) gremiowin += 1;
		else {
			if (gremio < inter) interwin += 1;
			else emp += 1;
		}
		cout << "Novo grenal (1-sim 2-nao)\n";
		cin >> yes;
	}
	cout << grenais << " grenais\n";
	cout << "Inter:" << interwin << "\n";
	cout << "Gremio:" << gremiowin << "\n";
	cout << "Empates:" << emp << "\n";
	if (interwin < gremiowin) cout << "Gremio venceu mais\n";
	else 
		if (interwin > gremiowin) cout << "Inter venceu mais\n";
		else cout << "Nao houve vencedor\n";
	
	return 0;
}
