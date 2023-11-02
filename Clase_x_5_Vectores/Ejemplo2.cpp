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
    
    // Acceso tipico
    cout << valores_3[3]<< endl;
    cout << valores_3[10]<<endl; // si intentas acceder a una posicion que no existe te devuelve un valor raro (memoria)

    // Metodo at (hace comprobacion de limites)
    cout << valores_3.at(3)<<endl;
    //valores_3.at(3)=10 // Reasignacion con at
    //cout << valores_3.at(10)<<endl; // Aca te va a mostrar un error a diferencia del caso anterior

    // Metodo pushback (agrega elementos al final)
    valores_3.push_back(5);
    cout << valores_3[4];
}

// g++ Ejemplo2.cpp -o Ejemplo2.exe
// .\Ejemplo2