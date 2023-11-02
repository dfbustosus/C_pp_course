#include <iostream>
using namespace std;

int main(){
    //Contexto: >>>> Cantidad de personas que entran a un local <<<<<
    // [año][mes][dia] >> dos años 2022 y 2023
    int cantidad_personas[2][12][31];
    // 2022, junio, 10
    int inicio= 2022;
    cantidad_personas[2022-inicio][6-1][10-1]=50;
    cout << "10 Junio de 2023: "<<cantidad_personas[2022-inicio][6-1][10-1] << " personas" << endl;

    // Rellenemos los datos con valores random
    for (int i=0; i <2; i++){
        for (int j=0; j < 12; j++){
            for (int z=0; z<31; z++){
                cantidad_personas[i][j][z]= rand() % 1000; // entre 0 y 1000
                // Si quieres en un rango especifico
                //cantidad_personas[i][j][z]= 5 + rand() % 1000;
            }
        }
    }
    // 15 Junio de 2023
    cout << "15 Junio de 2023: "<<cantidad_personas[2023-inicio][6-1][15-1] << " personas" << endl;
    // OJO!! Undefined behavior: C++ no contempla que te vas a equivocar en la indexacion (Error)

}

// g++ Ejemplo3.cpp -o Ejemplo3.exe
// .\Ejemplo3