#include <iostream>
using namespace std;

int main(){
    int a= 3;
    int b=3;
    int z = ++a; // asignacion prefijo (se incrementa a en uno y se asigna a z)
    cout << " z es: " << z << endl;
    cout << " a es: " << a << endl;

    int w= b++; // asignacion sufijo (se incrementa b pero no w)
    cout << " w es: " << w << endl;
    cout << " b es: " << b << endl;

    double deuda;
    cout << "Ingresa el valor de tu deuda en USD: ";
    cin >> deuda;
    int deudaInt = static_cast<int>(deuda); // Casting
    
    if (deudaInt %10 ==0){
        cout << "Tu deuda es multiplo de 10" << endl;
    }else {
        cout << "Tu deuda no es multiplo de 10" << endl;
    }

    // Tipos de datos
    int t= 5;
    float t1= 4.5f;
    double t2 = 6.5;
    auto t3= 3; // detecta el valor automatico

    auto resultado = t+t1; // flotante resultante
    cout << "El tipo de dato de resultado es: " << typeid(resultado).name();

    // Ejemplo curioso
    int z1=2;
    int z2=3;
    int z3= 4;
    double media = (z1+z2+z3)/3;
    cout << " La media de los valores es: " << media << " y tipo de dato: "<< typeid(media).name();



}