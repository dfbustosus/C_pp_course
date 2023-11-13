# Bucles
Estructuras fundamentales de programación que permiten hacer repeticiones con cantidades definidas (for) o indefinidas (while, do-while). 

## Determinados
```cpp
for (int i=0; i <5; i++){
    // Codigo a ejecutar
}
```

## Indeterminados

```cpp
while (condicion){
    // Codigo a ejecutar
}
```

Otra alternativa es el `for-each` que se usa para recorrer array, vectores o contenedores (list,set, map, vector, etc). Se ntrodujo desde la version 11 

```cpp
for (int n: valores){
    cout << n << endl;
}
```

`Do-while` es otra opcion que se tiene cuando se necesita realizar una operación un número indeterminado de veces y la condición de parada depende de algún calculo o entrada del usuario que ocurre dentro del bucle. Además se necesita que el cuerpo del bucle se ejecute al menos una vez

```cpp
do{
    accion
} while{
    condicion
}
```
