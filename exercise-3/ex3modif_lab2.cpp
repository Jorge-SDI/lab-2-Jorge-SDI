#include <iostream>
using namespace std;

int main (){
    //obtener tres numeros por separado y unirlos en uno solo
    int num1, num2, num3;
    cout << "Introduzca el primer numero (solo 1 cifra): ";
    cin >> num1;
    cout << "Introduzca el segundo numero (solo 1 cifra): ";
    cin >> num2;
    cout << "Introduzca el tercer numero (solo 1 cifra): ";
    cin >> num3;

    // Juntar los numeros en uno
    int numeroCombinado = (num1 * 100) + (num2 * 10) + (num3 * 1);
    
    //imprimir resultados
    cout << "Numeros separados: " << num1 << ", " << num2 << ", " << num3 << endl;
    cout << "Numeros combinados: " << numeroCombinado << endl;










    return 0;
}