# Operadores
1. Asignacion
2. Aritmeticos
3. Comparación
4. Lógicos
5. Nivel bit

# Aignación

| Simbolo | Descripcion     |
|--------|-----------------|
| =      | Igual           |
| +=     | Mas igual       |
| -=     | Menos igual     |
| *=     | Por igual       |
| /=     | Dividio igual   |

# Aritmeticos

| Simbolo | Descripcion     |
|--------|-----------------|
| +      | Suma           |
| -     | Resta       |
| *     | Multiplicacion     |
| /     | División       |
| %     | Modulo   |
| a++     | Incremento sufijo   |
| a--     | Decremento sufijo   |
| ++a     | Incremento prefijo   |
| --a     | Decremento prefijo   |

# Operaciones y conversiones

- Si los operadores son de diferente tipo C++ convertirá uno de ellos
- La regla general es que el tipo de dato del resultado será el tipo de dato más amplio o preciso de los operandos involucrados

**Reglas generales**

1. Si un operando es "long double" el otro operando se convierte a "long double" y el resultado sera "long double"
2. Si uno de los operandos es tipo "double" el otro se convierte a "double" y el resultado será "double"
3. Si uno de los operandos el tipo "float" el otro operando se convierte a "float" y el resultado será "float"
4. Si uno de los operandos es tpo "unsigned long long" el otro se convierte a "unsigned long long" y el resultado será "unsigned long long"
5. Si uno de los operandos es de tipo "long" el otro operando se convierte a "long" y el resultado será "long"
6. Si uno de los operandos es de tipo "int" el otro operando se convierte a "int" y el resultado será "int"

# Comparacion
| Simbolo | Descripcion     |
|--------|-----------------|
| >      | Mayor que           |
| <     | Menor que      |
| >=     | Mayor igual que      |
| <=     | Menor o igual que   |
| ==     | Igual que   |
| !=     | Diferente de   |

# Condicional IF

Notaciones:

```cpp
if (condicion1== true){
    accion1
}else{
    accion2
}
```
```cpp
if (condicion1== true){
    accion1
}else if {
    accion2
} else {
    accion3
}
```

## Logicos

| Simbolo | Descripcion     |
|--------|-----------------|
| !      | Negación           |
| &&     | Y lógico      |
| ||     | O lógico      |

- `&&` : Y ademas