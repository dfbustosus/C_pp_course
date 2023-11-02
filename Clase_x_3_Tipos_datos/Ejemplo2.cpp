#include <iostream>
using namespace std;

int main(){
    // Variables
    string nombre= "David";
    int edad = 23; // otra forma int edad {23};
    double gasto;
    // pedir por consolar
    cout << "Introduce tu gasto anual en USD: ";
    cin >> gasto; // Recibe el input de consola y lo guarda en gasto
    cout << "...................................." << endl;
    cout << "Datos de la persona : " << endl;
    cout << "Nombre: "<< nombre << ". Edad: " << edad << ". Gasto anual: " << gasto << endl;
    // Constantes
    const int valor=2;
    cout << "Valor: " << valor;
}
// g++ Ejemplo2.cpp -o Ejemplo2.exe
// .\Ejemplo2