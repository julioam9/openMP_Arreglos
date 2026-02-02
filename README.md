# Suma de Arreglos en Paralelo con OpenMP

## Descripción
Este proyecto implementa la suma de dos arreglos utilizando programación paralela en C++ mediante la librería **OpenMP**.  
Cada elemento del arreglo resultante se obtiene sumando los elementos correspondientes de dos arreglos de entrada, aprovechando que estas operaciones son independientes entre sí y pueden ejecutarse en paralelo.

El objetivo es demostrar cómo el paralelismo permite reducir el tiempo de ejecución cuando se trabaja con grandes volúmenes de datos.

---

## Objetivos
- Diseñar un algoritmo paralelo para un problema numérico.
- Implementar un ciclo `for` paralelo usando OpenMP.
- Aprovechar múltiples hilos de ejecución para mejorar el rendimiento.
- Verificar la correcta ejecución mediante la impresión de resultados parciales.

---

## Tecnologías utilizadas
- Lenguaje: **C++ (C++17)**
- Paralelismo: **OpenMP**
- Compilador: **Clang con libomp (macOS)**
- Entorno de desarrollo: **Visual Studio Code**

---

## Funcionamiento del programa
1. Se crean tres arreglos de tamaño `N = 1000`.
2. Los arreglos se inicializan de forma secuencial con valores aleatorios.
3. Se utiliza un ciclo `for` paralelo con OpenMP para calcular el arreglo `C`, donde:
   
