#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int N;
	char citacao[34] {'L', 'I', 'F', 'E', ' ', 'I', 'S', ' ', 'N', 'O', 'T', ' ',
					  'A', ' ', 'P', 'R', 'O', 'B', 'L', 'E', 'M', ' ', 'T', 'O',
					  ' ', 'B', 'E', ' ', 'S', 'O', 'L', 'V', 'E', 'D'};

	cin >> N;

	for (int i = 0; i < N; i++) {
		cout << citacao[i];
	}
	cout << "\n";
		
	return 0;

}
