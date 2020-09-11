#include <iostream>
#include <algorithm>
using namespace std;
 
int main() {
 
    int N, F1, F2;
    cin >> N;
    while (N < 1 || N > 3000) {
        cin >> N;
    }
    for (int i = 0; i < N; i++) {
        cin >> F1 >> F2;
        while (F1 < 1 || F1 > 1000 || F2 < 1 || F2 > 1000) {
            cin >> F1 >> F2;
        }
        cout << __gcd(F1, F2) << endl;
    }
 
    return 0;
}