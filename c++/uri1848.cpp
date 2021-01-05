#include <bits/stdc++.h>
using namespace std;

int main() {
	
	string corvo;
	int sum{0}, cont{0};
	
	while(cont < 3) {
		cin >> corvo;
		if (corvo == "--*") sum += 1;
		if (corvo == "-*-") sum += 2;
		if (corvo == "-**") sum += 3;
		if (corvo == "*--") sum += 4;
		if (corvo == "*-*") sum += 5;
		if (corvo == "**-") sum += 6;
		if (corvo == "***") sum += 7;
				
		if (corvo == "caw") {
			cin >> corvo;
			cout << sum << "\n";
			sum = 0;
			cont += 1;
		}

	}	

	return 0;

}
