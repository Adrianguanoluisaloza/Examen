//programa:bucle
//autor:Adrian Guanoluisa
//fecha:24-11-2023
//
#include<iostream>

using namespace std;

int main() 
{
    
    int n;

    cout << "Ingresa un número para ver su tabla de multiplicar: ";
    cin >> n;

    cout << "Tabla de multiplicar de " << n << ":" << endl;
    for (int u = 1; u <= 10; ++u) {
        int k = n * u;
        cout << n << " x " << u << " = " << k << endl;
    }

    return 0;
}
