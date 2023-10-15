# Instalación compilador para C++
1. En caso de que tengas Linux o MacOS no necesitas instalar el compilador de C++

2. En el caso de Windows. Para comprobar el compilador puedes abrir una terminal y colocar

```cmd
g++ --version
```

Si te sale un mensaje diciendo que no lo reconoce deberás instalar el compilador

3. Abrir una pestaña de google y colocar: MinGW-w64 (https://www.mingw-w64.org/)
4. Dar click en Downloads
5. Buscar el compilador `MingW-W64-builds` y hacer click sobre el (https://www.mingw-w64.org/downloads/#mingw-builds)
6. Hacer click donde dice `Installation: GitHub` (https://github.com/niXman/mingw-builds-binaries/releases)
7. Puedes descargar `x86_64-13.2.0-release-posix-seh-msvcrt-rt_v11-rev0.7z`
8. Descomprimir la carpeta `mingw64` en `C:` dandole permisos
9. Verifica que tengas `mingw64` en `C:`
9. Ahora debemos agregar el compilador a las variables de entorno
10. Ir a la ruta donde tengas `mingw64` y copiar la ruta e.g `C:\mingw64\bin`
11. Abrir variables de entorno
12. En las variables del sistema hacer click en Path
13. Nuevo > Copiar la ruta `C:\mingw64\bin` >> Aceptar
14. Vuelver a abrir un cmd y colocas ``g++ --version`. A veces es necesario reiniciar el computador pero no siempre. Te deberá salir algo como esto:
```cmd
g++ (x86_64-posix-seh-rev0, Built by MinGW-Builds project) 13.2.0
Copyright (C) 2023 Free Software Foundation, Inc.
This is free software; see the source for copying conditions.  There is NO
warranty; not even for MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
```
15. Ahora puedes instalar Visual Studio Code y habilitar el complemento de `C/C++`