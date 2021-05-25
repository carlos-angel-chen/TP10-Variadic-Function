# TP10-Variadic-Function

La función printf() es muy útil para escribir texto a pantalla y mostrar el valor de
distintas variables. Sin embargo y dependiendo el contexto en el cual se use, la
misma puede ocupar demasiada memoria para poder ser utilizada (por ejemplo,
microcontroladores con muy poca memoria de programa).

Se pide escribir una función propia, llamada mi_printf(), que cumpla las siguientes
condiciones:

• El primer argumento debe ser un string que deberá mostrarse en pantalla.

• El usuario podrá agregar argumentos adicionales con variables a imprimir
en pantalla, que podrán ser enteros o caracteres.

• El especificador “%d” en el string, indicará un entero signado a imprimir en
decimal.

• El especificador “%x” en el string, indicará un entero no signado a imprimir
en hexadecimal.

• El especificador “%c” en el string, indicará un carácter a imprimir.

• No hace falta que los especificadores tengan sub-especificadores de ancho,
precisión o modificadores, solo se pide una implementación básica.

• Solo se podrá escribir a la pantalla usando la función putchar().

• No usar librerías para realizar la conversión de entero a string.
