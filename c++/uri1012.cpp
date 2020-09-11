#include <iostream>
#include <iomanip> 
using namespace std;
 
int main() {
 
    double A, B ,C;
    cin >> A >> B>> C;
    cout << fixed << showpoint;
    cout << setprecision(3);
    cout << "TRIANGULO: " << A * C / 2 << endl;
    cout << "CIRCULO: " << 3.14159 * C * C << endl;
    cout << "TRAPEZIO: " << A * C + C * (B - A) / 2 << endl;
    cout << "QUADRADO: " << B * B << endl;
    cout << "RETANGULO: " << A * B << endl;
    return 0;
}