#include <iostream>
using namespace std;

int main(){
    string nombre= "David";
    int edad = 23; // otra forma int edad {23};
    double gasto;
    // pedir por consolar
    cout << "Introduce tu gasto anual en USD: ";
    cin >> gasto; // Recibe el input de consola y lo guarda en gasto
    cout << "...................................." << endl;
    cout << "Datos de la persona : " << endl;
    cout << "Nombre: "<< nombre << ". Edad: " << edad << ". Gasto anual: " << gasto;
}