#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<string> apellidos= {"Usta","Vrza","Paez","Narvaez","Fernandez"};

    string apellido_encontrar = "Narvaez";
    for (int i=0; i < apellidos.size(); i++){
        if (apellidos[i]==apellido_encontrar){
            cout << "Apellido encontrado : " << apellido_encontrar << " en posicion: " << i << endl;
            break;
        }
    }
}

// g++ Ejemplo1.cpp -o Ejemplo1.exe
// .\Ejemplo1
