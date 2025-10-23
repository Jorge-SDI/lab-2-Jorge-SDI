#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Ingrese un numero cual sea: ";
    cin >> n;

    if(n % 2 == 0){
        cout << n << " es un numero par" << endl;
    }
    else{
        cout << n << " es un numero impar" << endl;
    }
    

    return 0;
}