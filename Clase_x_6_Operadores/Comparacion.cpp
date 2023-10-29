#include <iostream>
using namespace std;

int main(){
    // Tienes ingreso para comprar una casa
    // El minimo es 1500 USD al mes
    double salario;
    cout << "Cual es tu ingreso mensual promedio: ";
    cin >> salario;

    if (salario >1500){
        cout << "Perfecto puedes comprar la case";
    } else if (salario == 1500){
        cout << "Probablemente puedas comprarla";
    } else{
        cout<< "No puedes comprar la clase";
    }
}