#include <iostream>
using namespace std;

int main(){
    // Trabajo con caracteres
    char asistente, seccion;
    cout << "Ingresa que tipo de asistente quieres (V: Voicebot, C: Chatbot): ";
    cin >> asistente;

    switch (asistente)
    {
    case 'V':
        cout << "Selecciona en que quieres ayuda ('C': Compras, 'G': General)" << endl;
        cin >> seccion;
        switch (seccion)
        {
        case 'C':
            cout << "Has elegido la categoria Compras"<< endl;
            break;
        case 'G':
            cout << "Has elegido la categoria General"<< endl;
            break;
        default:
            cout<< "Categoria no valida";
        }
        break;
    case 'C':
        cout << "Selecciona en que quieres ayuda ('C': Compras, 'G': General): ";
        cin >> seccion;
        switch (seccion)
        {
        case 'C':
            cout << "Has elegido la categoria Compras" << endl;
            break;
        case 'G':
            cout << "Has elegido la categoria General" << endl;
            break;
        default:
            cout<< "Categoria no valida";
        }
        break;
    default:
        cout << "Asistente no valido";
        break;
    }
}