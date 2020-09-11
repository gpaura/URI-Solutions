#include <iostream>
#include <iomanip>
using namespace std;
 
int main() {
    int i;
    double number[6];
    cin >> number[0] >> number[1] >> number[2] 
        >> number[3] >> number[4] >> number[5];
    int cont = 0;
    double soma = 0;
    for (i = 0; i < 6; i++) {
    if (number[i] > 0) {
        cont += 1;
        soma = soma + number[i]; 
    }
    }
    double media = soma / cont;
    cout << cont << " valores positivos" << endl;
    cout << fixed << setprecision(1) << media << endl;
    return 0;
}