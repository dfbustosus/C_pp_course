# Bucles anidados

- Simplemente son bucles dentro de otros.
- Puedes tener bucles anidados con while, for, do-while y combinaciones
- Sirven para manipular vectores, arrays y vectores multidimensionales. Pero también para generar combinaciones de elementos. También para simulaciones. Además se puede usar para crear malware o incluso para renderizado gráfico cuando hay que recorrer cda pixel.
- Otros usos es en juego, ordenamiento, operaciones con cadenas, creación de interfaces y muchas más cosas

Ejemplo de notación: 
```cpp
for (int i=0; i<2; i++){
    for (int j=0; j<2; j++){
        cout << "Valor posicion fila :" << i+1 << " posicion columna: " << j+1<< endl;
    }
}
```