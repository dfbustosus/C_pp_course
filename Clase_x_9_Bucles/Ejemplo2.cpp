#include <iostream>
#include <vector>
using namespace std;

// For each ejemplo
int main(){
    cout << "------------------" << endl;
    cout << "For each simple" << endl;
    double salarios [] {1000.23, 100.45, 200.54, 300.45, 1500.45};

    for (double local : salarios){
        cout << local << endl;
    }
    // Inferencia de tipos
    cout << "------------------" << endl;
    cout << "Inferencia de tipos" << endl;
    int edad [] {10,20,30,40};

    for (auto local2 : edad){
        cout << local2 << endl;
    }
    // Vectores
    cout << "------------------" << endl;
    cout << "Introduce numeros. Presiona 0 para salir" << endl;
    vector<int> numeros;
    int num;
    while (cin >>num && num !=0){
        numeros.push_back(num);
    }
    cout << "Estos son tus numeros" << endl;
    int conteo=0;
    for (auto local3: numeros){
        conteo++; // Incrementamos
        cout << "Numero " << conteo << ": " <<local3 << endl;
    }
}
