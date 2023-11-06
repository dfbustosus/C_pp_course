#include <iostream>
using namespace std;

int main(){
    int cantidad;
    cout << "Ingresa cantidad de notas a calcular: ";
    cin >> cantidad;

    double *notas = new double[cantidad]; // Dynamic array allocation
    double local_variable;
    for (int contador = 0; contador < cantidad; contador++) {
        cout << "Ingresa la nota " << contador + 1 << " : ";
        cin >> local_variable;
        notas[contador] = local_variable;
    }

    double suma = 0.0;
    for (int i = 0; i < cantidad; i++) {
        suma += notas[i];
    }
    
    cout << "La suma total es: " << suma/cantidad;

    delete[] notas; // Freeing memory allocated for the array
    return 0;
}