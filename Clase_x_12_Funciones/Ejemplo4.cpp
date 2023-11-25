#include <iostream>
#include <math.h>
#include <vector>
using namespace std;

void duplicarEdades(vector<int> &vec){ // Paso por referencia
    for (int &valor:vec){
        valor *=2;
    }
}

int main(){

    vector<int> edades = {20,22,25,28,30,32};

    cout << "Edades originales :";
    for (int valor:edades){
        cout << valor << " "; 
    }
    cout << endl;

    cout << "Valores duplicados :";
    duplicarEdades(edades);

    for (int valor:edades){
        cout << valor << " "; 
    }
    cout << endl;


}