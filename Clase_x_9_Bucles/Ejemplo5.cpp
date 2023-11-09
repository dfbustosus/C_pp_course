#include <iostream>
using namespace std;

int main(){
    int numero;

    do {
        cout << "Ingresa un numero positivo por favor para continuar: ";
        cin >> numero;

        if (numero <=0){
            cout << "No es positivo intentalo nuevamvente";
        }
    }while(numero <=0);
    
    cout << "Perfecto has introducido: "<< numero;
}