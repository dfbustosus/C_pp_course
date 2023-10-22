#include <iostream>
using namespace std;

int main(){
    //Forma 1
    cout << "------------ Forma 1 ---------- " << endl;
    int mi_arrray[]{2,3,10};
    cout << "Posicion inicial: " << mi_arrray[0] << endl;
    cout << "Posicion final: " << mi_arrray[2] << endl;
    // Forma 2
    cout << "------------ Forma 2 ---------- " << endl;
    int mi_array2[5]{2};
    cout << "Array posicion 2: " << mi_array2[2-1] << endl;
    // Forma 3
    cout << "------------ Forma 3 ---------- " << endl;
    const int largo=10;
    double mi_array3[largo]{5.4};
    cout << "Array posicion 5: " << mi_array3[5-1] << endl;
    mi_array3[5-1]= 1.3; // reasignacion
    cout << "Array posicion 5: " << mi_array3[5-1] << endl;

    // Ejemplo adicional
    cout << "Ingresa un valor en la posicion 6: " << endl;
    cin >> mi_array3[6-1];
    cout << "El valor en la posicion 6 es: " << mi_array3[6-1];

    

}