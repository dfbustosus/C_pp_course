# Arrays
**¿Que son?**

Estructura de datos con valores del mismo tipo. En C++ los vectores son similares pero no lo mismo

**¿Para que me sirven?**

Para almacenar valores que tienen una relación entre sí. Para ser más eficientes en el manejo de memoria

**Sintaxis**

```cpp
int mi_array[n];
```

**NOTA:** No existen arrays dinámicos, su número de elementos no puede cambiar a diferencia de los vectores

# Declaracion e inicializacion

- **Forma 1**
```cpp
int mi_array[5] {1,2,5,6,7-2}
```
- **Forma 2**
```cpp
int mi_array[5]{15,25}
```
Esto implica que los ultimos 3 valores son 0

- **Forma 3**
```cpp
const double valores{20}
double mi_array[valores]{1000.10}
```

- **Forma 4**
```cpp
int mi_array[]{15,25,10,5.6}
```
Aqui el lenguaje identifica el numero de elementos por default

**Nota:** Importante recordar que el indice empieza en 0 para C++





