#include <iostream>
#include <iomanip> 
using namespace std;
 
int main() {
 
    double A, B, C;
    cin >> A >> B >> C;
    double media = (2 * A + 3 * B + 5 * C) / 10;
    cout << fixed << showpoint;
    cout << setprecision(1);
    cout << "MEDIA = " << media << endl;
 
    return 0;
}