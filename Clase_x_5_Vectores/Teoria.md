# Vectores

- Es una clase de la libreria estandar C++ para almacenar datos secuenciales
- Los vectores pueden crecer/decrecer en tamaño de forma dinamica a diferencia de los arrays
- La sintaxis es similar a los arrays
- Tiene muchos metodos para identificar tamaño, limite, etc
- Almacenan valores en posiciones secuenciales de memoria y usa el concepto de punteros
- Tienen mismo tipo de dato
- Indices arrancan en 0 y la ultima posicion -1 

**Notacion**
```cpp
#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector <int> valores(5);
    vector <char> nombres(10);
}
```

**Otras notaciones**
````cpp
vector <int> valores_3(2,4,6,8); 
vector <char> letras {'a','b','c'};
``

```cpp
vector <double> salario (350, 1000); // 350 posiciones con 1000 en todos los valores
```