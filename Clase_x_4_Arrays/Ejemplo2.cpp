#include <iostream>
using namespace std;

int main(){
    int mi_array[2][3]{1,2,3,4,5,6};

    int mi_array_2[2][3]={
                        {1,3,4},
                        {5,6,7}
                    };

    cout << "Fila 1 Columna 3: " <<mi_array_2[0][2] << endl;

    int mi_array_3 [3][3];
    for (int f=0; f<3; f++){
        for (int c=0; c<3; c++){
            cout << "Ingresa valor para fila " << f+1 << " columna " << c+1 << ": " ;
            cin >> mi_array_3[f][c];
        }
    }
    cout << endl;

    cout << "Fila 2, Columna 1:" << mi_array_3[1][0] << endl;

}

// g++ Ejemplo2.cpp -o Ejemplo2.exe
// .\Ejemplo2