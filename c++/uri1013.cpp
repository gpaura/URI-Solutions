#include <iostream>
#include <cmath> 
using namespace std;
 
int main() {
 
    int A, B, C;
    cin >> A >> B >> C;
    int maiorAB = ((A + B + abs( A - B)) / 2);
    if (maiorAB > C) {
        cout << maiorAB << " eh o maior" << endl;
    } else {
        cout << C << " eh o maior" << endl;
    }
    return 0;
}