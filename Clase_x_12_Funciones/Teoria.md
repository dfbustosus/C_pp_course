# Funciones

## Que son
- Son un bloque de codigo identificado como un nombre que realiza una tarea específica y que puede tomar opcionalmente  datos de entrada y devolver una salida

## Para que sirven?

1. Reutilizar código
2. Modularidad 
3. Abstracción (saber la construcción no es indispensabble)
4. Reducción de errores
5. Flexibilidad sin afectar en gran medida un flujo completo

## Tipos de funciones

- Definidas por el lenguaje en la biblioteca Standard de C++ (e.g pow, sqrt, cout) las cuales se pueden encontrar en:
https://en.cppreference.com/w/

- Definidas por el usuario que creas para hacer algo específico

## Notacion

```cpp
double calculo_interes(double monto, double interes, int years){
    double A;
    A= monto*pow(1+ (interes/100)/12, 12*years);
    return A;
}
```

## Prototipos

Son declaraciones previas de una funcion que informa al compilador de que se usara en el programa esa funcion, asi como su tipo y numero de parametros y si la funcion devolvera o no un valor. Algo as'i como quiero usar la funci'on cuando quiera no importa donde la declare

Entonces como le dices al compilador que vamos a usar una función?

1. Definiendo la función antes de usarla
2. Usando funciones prototipos
- Especifican al compilador que funciones se van a utilizar en el programa así como sus parametros y tipos y si la función devoolverá valor o no
- Se colocan al comienzo del programa (No es estrictamente necesario pero si conveniente)
- Admiten la posibilidad de crearlas en archivos externos (extensiones `.h` o `.hpp`) algo importante para la `modularización`

## Parametros por valor y referencia

Se pasa por valor cuando
1. Quieres hacer operaciones matematicas sin afectar el valor original
2. Funciones que necesitan asegurarse que el valor original no se afecte

Se para por referencia cuando
1. Modificar los valores de las variables que se le pasan, e.g resetear una variable
2. Para evitar copias que ocnsuman mucho recurso
3. Cuando debes devolver multiples valores modificados
4. Polimorfismo (muchas formas) 