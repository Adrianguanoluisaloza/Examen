#include<iostream>

using namespace std;

int main() {
    // Variable para almacenar el número ingresado por el usuario
    int numero;

    // Solicitar al usuario que ingrese un número
    cout << "Ingresa un número: ";
    cin >> numero;

    // Estructura de control para determinar si el número es positivo, negativo o cero
    if (numero > 0) {
        cout << "El número es positivo." << endl;
    } else if (numero < 0) {
        cout << "El número es negativo." << endl;
    } else {
        cout << "El número es cero." << endl;
    }

    return 0;
}
