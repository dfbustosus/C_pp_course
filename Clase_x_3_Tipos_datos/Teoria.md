# C++
Es un lenguaje tipado y se deben crear antes de usarlas
Pero es sensible al tipo de procesador y tipo de máquina. Aunque es mucho más rápido que otros lenguajes

# Tipos de datos
1. **Caracteres**
- char (1 byte, -128 a 127) caracter o entero pequeño
- char8_t (1 byte, -128 a 127) Caracteres Unicode 8 bits
- char16_t (2 byte, -128 a 127) Caracteres Unicode 16 bits
- char32_t (4 byte, -128 a 127) Caracteres Unicode 32 bits
- wchar_t (4 byte, -128 a 127) Caracteres Unicode

2. **Enteros**
- short (2 bytes, -32768 a 32767) /unsigned (sin signo)
**Que es el unsigned e.g Si declarar unsigned short va de 0 a 32767*2**
- int (4 bytes, -2147483648 a 2147483647) /unsigned (sin signo)
- long (4 bytes, -2147483648 a 2147483647) /unsigned (sin signo)
- long long (8 bytes, -9223372775808 a 9223375775807) /unsigned (sin signo)

3. **Decimales**
- float (7 decimales, 4bytes, 1.2e-38 a 3.4 e38)
- double (15 decimales, 8 bytes, 2.2e-308 a 1.8e308)
- long double (19 decimales,8 bytes, 3.3e-4932 a 1.2e4932)

4. **Booleanos**
- bool (1 bytes, true=1/false=0)

# Variables

Espacio en la memoria del compu donde se almacenara un valor que puede cambiar

RAM= Random Access Memory (memoria volatil)

**Reglas declaración variables**

1. Primer caracter debe ser una letra o guion bajo
2. No se permiten espacios en blanco
3. Tratar de no crear nombres con muchos caracteres
4. Evitar caracteres especiales $
5. No usar palabras reservadas (include, cout, new, etc)
6. No se puede declarar variables 2 veces con el mismo nombre en el mismo ámbito
7. C++ es Case Sensitive (David no es igual a david, DaViD etc)

**Formas de inicializacion**
```cpp
int z; // sin inicializar
int z=5; // inicializacion tipica
int z(5);  // inicializacion de constructor
int z {5}; // inicializacion de lista
```

# Constantes
- Similar a las variables pero no varian su valor durante la ejecución del programa
- Las constantes en C++ tienen tipo (lenguaje fuertemente tipado)
- Las constantes se declaran e inicializan al mismo tiempo (OJO!)

# Tipos de constantes
- Constantes literales (\n ,\t, \b )
- Constantes declaradas (const int david = 1;)
- Expresiones constantes: palabras reservadas (precedidas de constexpr)
- Constantes enumeradas: palabra reservada enum
- Constantes definidad: #define valor= 10; (ya no se usa)