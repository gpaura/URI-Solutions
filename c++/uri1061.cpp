#include <iostream>

using namespace std;

int main() {
    int diai, diaf, hi, mi, si, hf, mf, sf;
    char dia[4], s; //s de simbolo para o ':'
    
    cin >> dia >> diai >> hi >> s >> mi >> s >> si;
    cin >> dia >> diaf >> hf >> s >> mf >> s >> sf;

    int sResult = sf - si;
    int mResult = mf - mi;
    int hResult = hf - hi;
    int diaResult = diaf - diai;

    if (sResult < 0) {
        mResult = mResult - 1;
        sResult = sResult + 60;
    }
    if (mResult < 0) {
        hResult = hResult - 1;
        mResult = mResult + 60;
    }
    if (hResult < 0) {
        diaResult = diaResult - 1;
        hResult = hResult + 24;
    }
    
    cout << diaResult << " dia(s)\n";
    cout << hResult << " hora(s)\n";
    cout << mResult << " minuto(s)\n";
    cout << sResult << " segundo(s)\n";

    return 0;
}