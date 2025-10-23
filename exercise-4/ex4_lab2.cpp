#include <iostream>
#include <algorithm> // para usar min y max
using namespace std;

int main() {
    int a, b, c;
    cout << "Introduzca una sola cifra: ";
    cin >> a;
    cout << "Introduzca otra sola cifra: ";
    cin >> b;
    cout << "Introduzca una ultima sola cifra: ";
    cin >> c;

    int medio = a + b + c - max({a, b, c}) - min({a, b, c});

    cout << "El numero de en medio es: " << medio << endl;
    return 0;
}
