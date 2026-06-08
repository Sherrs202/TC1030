# TC1030 proyecto_juego_taberna

**Gerardo Silva Esqueda**

Simulador de juego de taberna desarrollado en C++ para la materia TC1030 (Programación Orientada a Objetos) como proyecto final

---

**Contexto**

Este proyecto simula la administración de una taberna donde el jugador debe gestionar su inventario, vender bebidas a los clientes y sobrevivir a eventos aleatorios.
Dentro del juego podras comprar bebidas o algo para defenderte

## Requisitos
-Tener compilador de g++
-Sistema operativo Windows 

## Instalación y ejecución del programa

1. Descarga el repositorio como .zip y descomprimelo
2. Abre una terminal en (PowerShell o CMD)y navega a la carpeta donde lo descargaste
3. Compila
```cpp
g++ Main.cpp Persona.cpp Cliente.cpp Bebida.cpp Bandido.cpp Arma.cpp Item.cpp Juego.cpp Jugador.cpp -o juego.exe
```
4. Ejecuta
```cpp
.\juego.exe
```


**Casos donde falla**

Si se pone letras en vez de números cuando te lo pide se hace un bucle :(
