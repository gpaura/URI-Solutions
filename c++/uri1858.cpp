#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int N, T{0}, mini{21}, i{1}, pos;
	
	cin >> N;
	
	while (i <= N) {
		cin >> T;
		if (T < mini) {mini = T; pos = i;}
		i++;
	}
	
	cout << pos << "\n";
	
	return 0;

}
