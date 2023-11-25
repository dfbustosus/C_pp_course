#include <iostream>
#include <math.h>
using namespace std;

void ejemplo(float david){ // Paso por valor
    david = 100.45;
}

void ejemplo2(float &david){ // Paso por referencia
    david = 90.45;
}

int main(){
    float minum= 50.45;
    cout << "Valor original " << minum << endl;

    ejemplo(minum); // Paso por valor (Creando una copia)
    cout << "Valor despues de llamar la funcion (paso por valor) : " << minum << endl;
    ejemplo2(minum); // Paso por referencia (Creando una copia)
    cout << "Valor despues de llamar la funcion (paso por referencia) : " << minum << endl;
}


