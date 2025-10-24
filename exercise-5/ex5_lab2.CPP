#include <iostream>
using namespace std;

int main() {
    //programa de C++ que calcule f(x) = x 3 − x 2 + 5 para x = {0, 1, 2, 3, 4, 5}
    //no introduci nada de valores, solo tomo del 0 al 5 como indica el ejercicio
    cout << "********" << endl;
    cout << "x" << " " << "f(x)" << endl;
    cout << "********" << endl;
    for (int i = 0; i <= 5; i++) {
        //equivalente a f(x) = x**3 - x**2 + 5
        int fx = i * i * i - i * i + 5;
        cout << i << " " << fx << endl;
    }
    cout << "********" << endl;
    
    return 0;
}