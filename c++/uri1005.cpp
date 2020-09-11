#include <iostream>
#include <iomanip>  //para poder usar setprecision
using namespace std;
 
int main() {
 
    double A, B;
    cin >> A >> B;
    double media = (3.5 * A + 7.5 * B)/11;
    cout << fixed << showpoint;
    cout << setprecision(5);
    cout << "MEDIA = " << media << endl;
    
    return 0;
}