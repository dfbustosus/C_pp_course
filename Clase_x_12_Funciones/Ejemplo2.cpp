#include <iostream>
#include <string>
#include <cctype>
#include <math.h>
using namespace std;
// Funcion prototipo
string extraeryconvertiraUpper(const string &input);

int main(){
    string input;
    string salida;
    cout << "Ingresa tu nombre por favor :";
    cin >> input;
    salida = extraeryconvertiraUpper(input);
    cout << "El resultado es: " << salida;
}


// Extraer primer y ultimo caracter de un string
string extraeryconvertiraUpper(const string &input){
    string stripInput = input;
    // Remover los espacios en blanco al inicio o fin
    stripInput.erase(0, stripInput.find_first_not_of(" \t\r\n"));
    stripInput.erase(stripInput.find_last_not_of(" \t\r\n")+1);
    // Obtener el primer caracter
    char primerChar = toupper(stripInput.front());
    // Obtener el ultimo caracter
    char ultimoChar = toupper(stripInput.back());
    // Crear el resultado
    string resultado ="Tu inicial es: ";
    resultado += primerChar;
    resultado += " y tu ultima letra es: ";
    resultado += ultimoChar;
    return resultado;
}


// g++ Ejemplo2.cpp -o Ejemplo2.exe
// .\Ejemplo2
