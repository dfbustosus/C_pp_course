# Break

1. Se usa para terminar el bucle inmediatamente sin importar la condición del bucle. 
2. Una vez se ejecuta el flujo de ejecuci'on del programa abandona el bucle. 
3. Es util cuando se desea salir de un bucle debido a una condición especifica
4. Permite ahorrar recursos del sistema

```cpp
for (int i=0; i<10 ; i++){
    if (i==5){
        break;
    }
    cout << i << endl;
}
```

# Continue

Se usa para saltarse el resto de la iteracón actual y pasar a la siguiente iteración del bucle

Lo que hace es `continuar` con la siguiente iteración del bucle

```cpp
for (int i=0; i<10 ; i++){
    if (i==5){
        continue;
    }
    cout << i << endl;
}
```