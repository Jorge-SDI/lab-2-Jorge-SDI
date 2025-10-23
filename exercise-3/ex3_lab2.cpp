#include <iostream>
using namespace std;

int main(){
    //obtener el numero
    int numCinco;
    cout << "Introduzca un numero (de 5 cifras): ";
    cin >> numCinco;
    
    //obtener cada cifra del numero, uno a la vez
    int num1 = (numCinco / 10000) % 10;
    int num2 = (numCinco / 1000) % 10;
    int num3 = (numCinco / 100) % 10;
    int num4 = (numCinco / 10) % 10;
    int num5 = (numCinco / 1) % 10;

    //mosrtrar resultados
    cout << "Numeros de 5 digitos: " << numCinco << endl;
    cout << "Numero separado: " << num1 << ", " << num2 << ", " << num3 << ", " << num4 << ", " << num5 << ", ";
    
    
    return 0;
}