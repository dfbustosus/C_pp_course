#include <iostream>
using namespace std;

// Valor por referencia (Funcion convertir strings a minus)
void Minusculas(string &cadena){
    for (int i=0; i < cadena.length(); i++){
        cadena[i]= tolower(cadena[i]);
    }
}

int main(){
    bool a = true;
    bool b = false;

    // Logical AND (&&) Y ADEMAS
    if (a && b) {
        cout << "Ambos a y b son verdad" << endl;
    } else {
        cout << "Al menos uno de los dos a y b es false" << endl;
    }
    // Logical OR (||) 
    if (a || b) {
        cout << "Al menos uno de los dos entre a y b es true" << endl;
    } else {
        cout << "Ambos a y b son false" << endl;
    }
    // Logical NOT (!)
    cout << "El valor de 'a' es: " << a << endl;
    cout << "La negación de 'a' es: " << !a << endl;

    // Otro ejemplo
    int edad;
    string examen_medico;
    cout << "Cual es tu edad: ";
    cin >> edad;
    cout << "Has pasado el examen medico (Si/No): ";
    cin >> examen_medico;
    Minusculas(examen_medico); // Convertir a minus

    if (edad >=18 && examen_medico=="si"){
        cout << "Puedes obtener el certificado";
    }else{
        cout << "No cumples con los requisitos";
    }



    
    
    return 0;
}