#include <iostream>

int main() {
    int rows = 5; // Number of rows in the triangle
    int i = 1;

    // Outer loop for rows
    while (i <= rows) {
        int j = 1;

        // Inner loop for printing asterisks
        while (j <= i) {
            std::cout << "* ";
            j++;
        }

        std::cout << std::endl;
        i++;
    }

    return 0;
}

// g++ Ejemplo3.cpp -o Ejemplo3.exe
// .\Ejemplo3
