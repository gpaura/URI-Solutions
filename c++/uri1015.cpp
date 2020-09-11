#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
 
int main() {
 
    double x1, y1, x2, y2;
    cin >> x1 >> y1;
    cin >> x2 >> y2;
    double distancia = sqrt((x2 - x1) * (x2 - x1) + 
                            (y2 - y1) * (y2 - y1));
    cout << fixed << showpoint;
    cout << setprecision(4);
    cout << distancia << endl;
 
    return 0;
}