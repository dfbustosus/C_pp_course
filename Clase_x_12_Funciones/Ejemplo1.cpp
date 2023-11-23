#include <iostream>
#include <math.h>
using namespace std;

// Interes compuesto ejemplo
double calculo_interes(double monto, double interes, int years){
    double A;
    A= monto*pow(1+ (interes/100)/12, 12*years);
    return A;
}

double monto;
int main(){
    cout << "Ingresa el monto a calcular :";
    cin >> monto;
    cout << "El resultado es: " << calculo_interes(monto,13,2);
}
// g++ Ejemplo1.cpp -o Ejemplo1.exe
// .\Ejemplo1
