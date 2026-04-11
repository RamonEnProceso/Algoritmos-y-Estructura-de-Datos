# Plantilla Estándar de Pseudocódigo

## Objetivo

Esta plantilla define el formato obligatorio de pseudocódigo para la cursada.  
Su uso permite escribir algoritmos de forma clara, ordenada y sin ambigüedades.

---

## Estructura General

ALGORITMO NombreDelAlgoritmo

// -----------------------------
// ESPECIFICACIÓN
// -----------------------------

ENTRADA:
    - Describir claramente los datos de entrada

SALIDA:
    - Describir claramente los resultados esperados

PRECONDICIONES:
    - Condiciones que deben cumplirse antes de ejecutar el algoritmo

POSCONDICIONES:
    - Condiciones que se garantizan al finalizar el algoritmo


// -----------------------------
// DECLARACIÓN DE VARIABLES
// -----------------------------

Definir variables necesarias
Inicializar si corresponde


// -----------------------------
// PROCESO
// -----------------------------

Paso 1: Inicialización

Paso 2: Procesamiento principal

Paso 3: Obtención de resultados


// -----------------------------
// SALIDA
// -----------------------------

Mostrar o retornar resultados

FIN ALGORITMO

---

## Convenciones

### Nombres

- Variables: min, max, contador, suma
- Arreglos: V, notas, datos
- Índices: i, j, k

---

### Asignación

x <- valor

---

### Operadores

=   igual  
!=  distinto  
<   menor  
>   mayor  
<=  menor o igual  
>=  mayor o igual  

---

### Estructura de decisión

Si condicion entonces
    acciones
Sino
    acciones
FinSi

---

### Estructura iterativa (Para)

Para i desde 0 hasta N-1 hacer
    acciones
FinPara

---

### Estructura iterativa (Mientras)

Mientras condicion hacer
    acciones
FinMientras

---

## Ejemplo

ALGORITMO CalcularMaximo

// -----------------------------
// ESPECIFICACIÓN
// -----------------------------

ENTRADA:
    - Vector V de N números enteros

SALIDA:
    - Valor máximo del vector

PRECONDICIONES:
    - N > 0

POSCONDICIONES:
    - max es el mayor valor del vector


// -----------------------------
// DECLARACIÓN DE VARIABLES
// -----------------------------

Definir max, i


// -----------------------------
// PROCESO
// -----------------------------

max <- V[0]

Para i desde 1 hasta N-1 hacer
    Si V[i] > max entonces
        max <- V[i]
    FinSi
FinPara


// -----------------------------
// SALIDA
// -----------------------------

Mostrar max

FIN ALGORITMO

---

## Reglas Importantes

- Todo algoritmo debe incluir especificación completa
- No comenzar a programar sin definir entrada y salida
- Mantener claridad antes que complejidad
- Respetar la indentación
- Usar nombres significativos

---

## Criterio General

Si no podés expresar la solución en pseudocódigo claro, no entendiste el problema.
