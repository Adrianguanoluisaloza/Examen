#include<iostream>

using namespace std;

int main() {
    // Solicitar dos números enteros al usuario
    int num1, num2;
    cout << "Ingresa el primer número entero: ";
    cin >> num1;
    cout << "Ingresa el segundo número entero: ";
    cin >> num2;

    // Realizar la suma
    int suma = num1 + num2;

    // Mostrar el resultado en la pantalla
    cout << "La suma de " << num1 << " y " << num2 << " es: " << suma << endl;

    return 0;
}
