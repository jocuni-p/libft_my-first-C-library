# ft_printf

## Descripción
`ft_printf` es una implementación personalizada de la función `printf` de la biblioteca estándar de C. Esta versión permite imprimir texto formateado en la salida estándar sin el uso de la librería `stdio.h`.

## Características
- Soporta los siguientes especificadores de formato:
  - `%c` → Imprime un solo carácter.
  - `%s` → Imprime una cadena de caracteres.
  - `%p` → Imprime una dirección de memoria en formato hexadecimal.
  - `%d` y `%i` → Imprimen números enteros con signo.
  - `%u` → Imprime números enteros sin signo.
  - `%x` y `%X` → Imprimen números en hexadecimal (minúsculas y mayúsculas).
  - `%%` → Imprime el carácter `%` literal.
- Implementado sin el uso de funciones de `printf` originales.
- Manejo seguro de memoria.

## Uso

### **1. Compilación**
La compilacion es parte de la libft.


### **2. Ejemplo de uso**

```c
#include "ft_printf.h"

int main()
{
    ft_printf("Hola, %s!\n", "mundo");
    ft_printf("El número es: %d\n", 42);
    ft_printf("Dirección de memoria: %p\n", &main);
    return (0);
}
```

## Archivos

- `ft_printf.c` → Implementación de la función principal.
- `ft_printf_utils.c` → Funciones auxiliares para formateo de salida.
- `ft_printf.h` → Archivo de cabecera con las definiciones de funciones.
- `Makefile` → Se usa el Makefile de la libft.

## Funcionamiento Interno

1. **Procesamiento de la cadena de formato**: Se analiza la cadena en busca de `%`.
2. **Conversión y formateo**: Se reemplazan los especificadores por sus valores correspondientes.
3. **Salida de datos**: Se imprime en la salida estándar usando `write()`.
4. **Manejo de memoria**: Se asegura que no haya fugas de memoria.

## Notas
- La función devuelve el número total de caracteres impresos.
- No usa `printf` de la biblioteca estándar, solo `write()`.
- Se debe gestionar correctamente la memoria para evitar fugas.

## Autores
Este código fue desarrollado por jocuni-p como parte del proyecto de la escuela **42 Barcelona**.

---

