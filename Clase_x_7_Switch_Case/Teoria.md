# Switch-Case

Es una estructura condicional útil cuando necesitas hacer acciones determinadas de acuerdo al valor de una variable sin tener que colocar múltiples if-else

```cpp
switch(variable){
    case valor1:
        // Caso 1 .....
        break;
    case valor2:
        // Caso 2 ....
        break;
    default:
        // Todo lo demas si nada de lo anterior se ha cumplido
}
```

**Ejemplos**
1. Menús de opciones
2. Implementación de interpretes 

**Nota**

Solo funciona con `int,char,long` no puedes comparar strings directamente aunque si lo podemos hacer por medio de map hashing o otra estructura.
