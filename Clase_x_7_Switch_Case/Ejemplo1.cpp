#include <iostream>
using namespace std;

int main(){
    int opcion;
    cout << "Menu de opciones: " << endl;
    cout << "1. Ayuda: " << endl;
    cout << "2. Devolver saldo: " << endl;
    cout << "3. Salir del sistema: " << endl;
    cout << "Introduce una opción (1,2 o 3): " << endl;

    cin >> opcion;
    switch (opcion)
    {
    case 1:
        cout << "Te transferiremos con un asistente.";
        break;
    case 2:
        double gasto;
        cout << "Cuando gastaste el ultimo mes (USD): ";
        cin >> gasto;
        double ingreso;
        cout << "Cuando ganaste el ultimo mes (USD): ";
        cin >> ingreso;
        cout << "Tu saldo final fue: " << ingreso -gasto << " USD";
    case 3:
        cout << "Has salido del sistema" << endl; 
    default:
        cout << "Que tengas un gran dia";
        break; // OJO CON EL BREAK!
    }

}