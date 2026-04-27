# Plantilla Estándar de Pseudocódigo

## Objetivo

Asignar al azar un número para cada persona y ordenar, ya sea ascendente o descendente, a los participantes.

---

## Estructura General

ALGORITMO OrdenarPersonasPorNumero

// -----------------------------
// ESPECIFICACIÓN
// -----------------------------

ENTRADA:
    - Lista con nombre de personas

SALIDA:
    - Lista ordenada de personas a partir de su número asignado (Ascendente o Descendente)

PRECONDICIONES:
    - Decidir si ordenar la lista de menor a mayor (Ascendente), o mayor a menor (Descendente)
    - La lista debe tener por lo menos 2 personas

POSCONDICIONES:
    - Condiciones que se garantizan al finalizar el algoritmo


// -----------------------------
// DECLARACIÓN DE VARIABLES
// -----------------------------

Lista = [...Personas]
ListaOrdenada = [] 
Orden = "Asc" o "Desc"

// -----------------------------
// PROCESO (para Descendente)
// -----------------------------

Paso 1: A cada integrante de la lista, se le asigna un número al azar

Paso 2: A partir del orden asignado, se lee el número de la primera persona en la lista

Paso 3: Se compara su número con el número del siguiente en la lista

Paso 4: Si el número de la primera persona, es mayor, se asigna como la persona de mayor número, sino la siguiente.

Paso 5: Se repite el anterior paso consecutivamente con el resto de la lista.

Paso 6: Luego de iterar en todos los participantes de la lista, la persona de mayor número se coloca en la "lista ordenada" y se elimina de la original.

Paso 7: Se repite el paso 2, 3, 4, 5 y 6 hasta que la lista original quuede sin personas.

Paso 8: Se obtiene una lista con las personas ordenadas del mayor al menor número, a partir de su número asignado.


// -----------------------------
// SALIDA
// -----------------------------

Mostrar lista con las personas ordenadas del mayor al menor, a partir se su número asignado.

FIN ALGORITMO

---
