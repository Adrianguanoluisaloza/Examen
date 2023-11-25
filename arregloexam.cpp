//programa: arreglos
//autor: Adrian Guanoluisa
//fecha: 24-11-2023

#include<iostream>

using namespace std;

int main() 
{
    // Declarar un arreglo de 5 números enteros
    int a[5];

    // Solicitar al usuario que ingrese valores para cada elemento del arreglo
    cout << "Ingresa valores para los elementos del arreglo:" << endl;
    cout << "z: "; cin >> a[0];
    cout << "x: "; cin >> a[1];
    cout << "c: "; cin >> a[2];
    cout << "v: "; cin >> a[3];
    cout << "b: "; cin >> a[4];

    // Calcular la suma de todos los elementos del arreglo
    int suma = a[0] + a[1] + a[2] + a[3] + a[4];

    // Mostrar la suma de los elementos en la pantalla
    cout << "La suma de los elementos es: " << suma << endl;

    return 0;
}	
