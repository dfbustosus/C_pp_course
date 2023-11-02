#include <iostream>
#include <vector>
using namespace std;

int main(){
    // Notacion 1
    vector <int> valores_1; // Vector vacio
    vector <int> valores_2(5); // guarda por default zeros
    vector <char> nombres(10); // Crea espacios vacios '

    // Notacion 2
    vector <int> valores_3{2,4,6,8}; 
    vector <char> letras {'a','b','c'};

    // Notacion 3
    vector <double> salario (10, 1000); // 10 posiciones con 1000 en todos los valores
    
    // Bucle determinado: sabes el tamaño del vector
    for (int i=0; i <5; i++){
        cout << valores_2[i]<< endl;
    }
    // Bucle indeterminado: no sabes el tamaño del vector
    int m =0;
    while (m < salario.size()){
        cout << "Posicion " << m+1 << " : " << salario[m]<< endl;
        m++;
    }
}

// g++ Ejemplo1.cpp -o Ejemplo1.exe
// .\Ejemplo1