# Algoritmo de Conversión Unicode a UTF-8

## Objetivo

Implementar un algoritmo que realice la transformación de código Unicode hacia su representación binaria y, posteriormente, a su codificación final en formato UTF-8 (Hexadecimal).

---

## Estructura General

ALGORITMO ConvertirUnicodeAUTF8

// -----------------------------
// ESPECIFICACIÓN
// -----------------------------

ENTRADA:
    - punto_codigo: Cadena en formato hexadecimal representando el símbolo Unicode (ej: "267A").

SALIDA:
    - utf8_hex: Cadena con la representación hexadecimal de los bytes resultantes en UTF-8.
    - char: Carácter que representa ese hexadecimal.

PRECONDICIONES:
    - El punto de código debe ser un valor hexadecimal válido.
    - El rango del punto de código debe ser compatible con la lógica de 3 bytes (rango U+0800 a U+FFFF para el caso de U+267A).


// -----------------------------
// DECLARACIÓN DE VARIABLES
// -----------------------------

Definir punto_codigo_dec, binario_crudo, binario_formateado
Definir byte1, byte2, byte3
Definir utf8_hex


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
