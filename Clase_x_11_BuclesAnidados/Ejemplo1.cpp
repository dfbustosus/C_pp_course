#include <iostream>
using namespace std;


int main() {
    int rows = 5; //Numero de filas en el patron

    // Nested loops para crear el patron
    for (int i = 0; i < rows; ++i) {
        // Loop interno para imprimir asteriscos 
        for (int j = 0; j <= i; ++j) {
            std::cout << "* ";
        }
        std::cout << std::endl; // Moverse a la siguiente linea
    }

    return 0;
}

// g++ Ejemplo1.cpp -o Ejemplo1.exe
// .\Ejemplo1
