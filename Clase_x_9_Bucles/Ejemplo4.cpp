#include <iostream>
using namespace std;

int main() {
    int cantidad;
    cout << "Ingresa cantidad de notas a calcular: ";
    cin >> cantidad;

    double *notas = new double[cantidad]; // Dynamic array allocation

    double local_variable;
    int contador = 0;
    while (contador < cantidad) {
        cout << "Ingresa la nota " << contador + 1 << " : ";
        cin >> local_variable;
        notas[contador] = local_variable;
        contador++;
    }

    double suma = 0.0;
    contador = 0; // Resetear contador
    while (contador < cantidad) {
        suma += notas[contador];
        contador++;
    }

    cout << "La suma total es: " << suma/cantidad;

    delete[] notas; 
    return 0;
}
