#include <iostream>
using namespace std;

int main(){
    int num;
    cout << "Introduce tu edad: ";
    cin >> num;
    // Operador ternario
    cout << num << " es " << ((num %10==0)? " es multiplo de 10":" no es multiplo de 10") << endl; 

    double ingreso;
    cout << "Ingresa tu ingreso mensual (USD): ";
    cin >> ingreso;

    cout << "Tu ingreso de " << ingreso << ((ingreso>1000)? " te permite el credito":" no te permite el credito"); 

}

// g++ Ejemplo1.cpp -o Ejemplo1.exe
// .\Ejemplo1
