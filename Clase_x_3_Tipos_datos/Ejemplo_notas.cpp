#include <iostream>
using namespace std;

int main(){
    cout << "Hola bienvenido al simulador de notas " << endl;
    int cantidad_notas{0};
    cout << "\n Por favor ingresa la cantidad de notas que vas a introducir: ";
    cin >> cantidad_notas;
    cout << "\n Ahora deberas ingresar las notas una a una" << endl;
    double sum = 0.0;
    for (int i = 1; i <= cantidad_notas; i++) {
        double nota;
        std::cout << "Ingresa la nota " << i << ": ";
        std::cin >> nota;
        sum += nota;
    }

    if (cantidad_notas > 0) {
        double average = sum / cantidad_notas;
        std::cout << "El promedio de las notas es: " << average << std::endl;
    } else {
        std::cout << "No se ingresaron notas, no es posible calcular el promedio." << std::endl;
    }
    return 0;

}