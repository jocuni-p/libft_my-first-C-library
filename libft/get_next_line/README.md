
# get_next_line

## Descripción
`get_next_line()` es una función en C que permite leer una línea completa desde un descriptor de archivo (*file descriptor, fd*) de manera eficiente. Esta función es especialmente útil cuando se desea leer archivos línea por línea sin cargar el archivo completo en memoria.

## Características
- Lee una línea completa de un archivo o de la entrada estándar (`stdin`).
- Utiliza un **buffer dinámico** para manejar eficientemente la lectura.
- Soporta **múltiples descriptores de archivo**.
- Implementada con manejo de memoria dinámica para evitar desperdicio de memoria.

## Uso

### **1. Compilación**
El compilado de `get_next_line.c` se hace dentro de la libft.
Puedes ajustar el valor de `BUFFER_SIZE` según sea necesario en '#define BUFFER_SIZE 8' del libft.h 

### **2. Ejemplo de uso**

```c
#include <fcntl.h>
#include <stdio.h>
#include "get_next_line.h"

int main()
{
    int fd = open("archivo.txt", O_RDONLY);
    char *line;

    if (fd < 0)
        return (1);

    while ((line = get_next_line(fd)) != NULL)
    {
        printf("%s", line);
        free(line);
    }

    close(fd);
    return (0);
}
```

## Archivos

- `get_next_line.c` → Implementación de la función principal.
- `get_next_line_utils.c` → Funciones auxiliares para manejo de cadenas.
- `get_next_line.h` → Archivo de cabecera con la definición de funciones.
- `Makefile` → Script para compilar el código. Es el Makefile de la libft

## Funcionamiento Interno

1. **Lectura con `read()`**: Se leen bloques de `BUFFER_SIZE` bytes desde el archivo.
2. **Uso de un "stash"**: Se almacena el contenido no procesado en una variable `static`.
3. **Búsqueda de `\n`**: Se busca una nueva línea en el buffer leído.
4. **Devolución de la línea completa** y almacenamiento del contenido sobrante.
5. **Limpieza de memoria** para evitar fugas de memoria (*memory leaks*).

## Versión Bonus
La versión que esta implementada en este libft es la version "bonus" de `get_next_line` que permite manejar múltiples descriptores de archivo simultáneamente. Esto significa que se pueden leer distintas líneas desde distintos archivos a la vez, sin perder información de cada uno.

## Notas
- La función debe devolver `NULL` al llegar al final del archivo (EOF).
- Si `read()` devuelve un error, la función también debe retornar `NULL`.
- Se debe liberar la memoria devuelta por `get_next_line()` tras su uso.

## Autores
Este código fue desarrollado por jocuni-p como parte del proyecto de la esuela **42 Barcelona**.

---


