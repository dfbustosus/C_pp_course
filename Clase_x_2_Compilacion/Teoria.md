# Compilar
- **¿Que es?**: Pasar código fuente a código máquina

Nuestro código fuente puede estrar escrito en C++, Java, Python etc. Por ende compilar es traducir a código máquina

*Importante distinción*
- **Lenguaje programación bajo nivel:** lenguaje parecido al lenguaje máquina (ensamblador)
- **Lenguaje programación alto nivel:** lenguaje parecido al lenguaje humano (Python, Java, C++)

# Pasos para compilar

1. **Preprocesado**: ver todas las directivas o instrucciones para importar el código que hay en esas librerías.
2. **Compilación**: se generan unas instrucciones de ensamblado que dependerá del procesador y la máquina que tengas 
3. **Ensemblado**: se transforman las intrucciones del paso 2 a lenguaje máquina (1 y 0)
4. **Enlazado**: se fusionan todos los archivos de pasos anteriores en formato `.exe`para ser ejecutado por la máquina

Afortunadamente los IDE te facilitan la vida y no ves estos pasos.

Si quieres evitar estar eligiendo el interprete y luego el compilador a la hora de ejecutar los archivos en formato `.cpp` puedes irte a extensiones y buscas `coderunner` y la instalas (icono naranja > Run C, C++,Java,....). Automaticamente cuando quieras ejecutar tu archivo `.cpp` veras un botón que dice `Run C/C++ File`

**Sugerencia: ** En `C++` evita crear nombres de archivos con espacios, tíldes y caracteres especiales (e.g espacios en blanco, ñ, etc) ya que cuando el compilador trate de leerlo puede que tenga problemas

# Ejemplo código
```cpp
#include <iostream>
// comentario una linea
using namespace std;

int main(){
    cout << "Hola soy David" << endl;
    // std::cout << "Hola soy David" << std::endl;
    return 0;
}
/*
Comentario lineas multiples
*/

```

1. `#include <iostream>` es una directiva que nos permite añadir contenido que hay en bibliotecas predeterminadas (conjunto de clases y funciones/herramientas)
2. `using namespace std;` sentencia o declaracion, especificando que se va a usar un espacio de nombres que se llama std. Son como espacios virtuales para evitar solapamiento de nombres en bibliotecas.
3. `int main(){}`: función siempre comienza con llave de apertura y termina en otra llave de cierre `{}`. Permiten aglutinar bloques de código de forma secuencia de arriba a abajo.
Siempre hay una función principal que se llama `main()`. Esta será el punto de entrada comenzando por lo que haya dentro de main

Las funciones tienen una zona de parametros `int main(){}` puede estar vacíos o no. Algunas funciones necesitan parametros otras no. También se pueden crear tus propias funciones

*Todas las funciones devuelven un valor excepto de algunos casos que veremos después*

4. *Intrucciones*: `cout << "Hola soy David" << endl;` es un mensaje de consola `endl;` es un salto de línea. 

5. `return 0;` es el valor que nos está devolviendo la función main