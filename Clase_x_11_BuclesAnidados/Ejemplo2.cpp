#include <iostream>
using namespace std;

int main() {
    int size = 10; // Cuantas tablas de minuscular
    // Nested loops para generar tablas multiplicar
    for (int i = 1; i <= size; ++i) {
        std::cout << "Tabla de multiplicacion del " << i << ":\n"; 
        for (int j = 1; j <= size; ++j) {
            std::cout << i * j << "\t"; // Producto de i *j
        }
        std::cout << std::endl; // Mover a la siguiente linea
    }

    return 0;
}

// g++ Ejemplo2.cpp -o Ejemplo2.exe
// .\Ejemplo2
