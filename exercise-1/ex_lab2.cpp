#include <iostream> 
using namespace std;
  
int main(){ 
    int a, b, c; 
    cout << "Ingrese el valor que tendra A: ";;
    cin >> a; 
    cout << "Ingrese el valor que tendra B: ";
    cin >> b; 
    cout << "Ingrese el valor que tendra C: ";
    cin >> c; 
    
    //declarar la suma
    int suma = a + b + c;
    
    //declarar el promedio
    double promedio = suma / 3.0;
    
    //declarar el producto
    int producto = a * b * c; 
    
    //buscando el mayor y menor
    int mayor = a;
    int menor = a;

    if(b > mayor){
        mayor = b;
    }else if(b < menor){
        menor = b;
    }

    if(c > mayor){
        mayor = c;
    }else if(c < menor){
        menor = c;
    }

    //mostrar resultados
    cout << "Tres valores enteros --> [" << a << ", " << b << ", " << c << "] " << endl; 
    cout << "La suma es: " << suma << endl; 
    cout << "Promedio: " << promedio << endl; 
    cout << "Producto: " << producto << endl; 
    cout << "Valor mas pequeño: " << menor << endl; 
    cout << "Valor mas grande: " << mayor << endl; 
   
    return 0;
}
