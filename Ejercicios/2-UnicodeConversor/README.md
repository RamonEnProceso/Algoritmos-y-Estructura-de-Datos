# Unicode Conversor

Este proyecto es una herramienta desarrollada en C++ diseñada para convertir hexadecimales **Unicode** a su hexadecimales **UTF-8**

> Este ejercicio fue propuesto en la materia de "Arquitectura de Computadoras"
> Me sirvió para entender el Formato de Transformación Unicode (UTF)


## Algoritmo

1.  **Entrada:** El usuario ingresa una cifra hexadecimal (ejemplo: `267A`).
2.  **Conversión de Base:** El sistema traduce el hexadecimal a decimal y luego a su representación binaria cruda.
3.  **Lógica de Segmentación:** Dependiendo del valor decimal, el programa determina cuántos bytes requiere el carácter (de 1 a 4 bytes) según los rangos estándar de Unicode.
4.  **Aplicación de Máscaras UTF-8:** 
    - Se añaden los prefijos de bits correspondientes (ej: `1110` para 3 bytes).
    - Se insertan los bits de continuación `10` en los bytes secundarios.
5.  **Salida:** Se recompone el binario final, se convierte de nuevo a hexadecimal y se muestra el resultado (ej: `E299BA`).

## Ejemplo de Uso

```bash
Conversor de Unicode a UTF-8

Por favor ingrese un numero hexadecimal: 
267A
UTF-8: 0xE299BA
```

---

<div align="center">

**Ramón · UTN-Vault · 2026**

</div>