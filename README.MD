# Libft

## Descripción
`libft` es una biblioteca de funciones en C desarrollada como parte del programa de la escuela **42 Barcelona**. Proporciona implementaciones de funciones estándar de la biblioteca de C, así como utilidades adicionales para facilitar el desarrollo de programas.

## Características
- Implementaciones de funciones de la librería estándar `string.h`, `stdlib.h`, `ctype.h`, etc.
- Funciones para la manipulación de memoria y cadenas de caracteres.
- Funciones para manejo de listas enlazadas.
- Uso estricto de `malloc()` y `free()` para evitar fugas de memoria.
- **Incluye ademas, las funciones ft_printf() y get_next_line()**.

## Uso

### **1. Compilación**
Para compilar la biblioteca y generar `libft.a`, ejecuta:

```sh
make
```

Para limpiar archivos objeto y la librería:

```sh
make clean
make fclean
```

### **2. Inclusión en un proyecto**
Puedes incluir `libft` en tu proyecto de la siguiente manera:

```c
#include "libft.h"
```

Para compilar un programa que usa `libft`, ejecuta:

```sh
gcc -Wall -Wextra -Werror main.c -L. -lft -o my_program
```

## Archivos

- `libft.h` → Archivo de cabecera con las definiciones de funciones.
- `ft_*.c` → Implementaciones de las funciones.
- `Makefile` → Script para compilar la biblioteca.

## Funcionalidades Principales
- **Manipulación de memoria**: `ft_memset`, `ft_memcpy`, `ft_memmove`, `ft_bzero`, `ft_calloc`.
- **Manipulación de cadenas**: `ft_strlen`, `ft_strcpy`, `ft_strcat`, `ft_strdup`, `ft_substr`, `ft_split`.
- **Conversión de datos**: `ft_atoi`, `ft_itoa`.
- **Manejo de listas enlazadas**: `ft_lstnew`, `ft_lstadd_front`, `ft_lstsize`, `ft_lstclear`.

## Notas
- La biblioteca solo usa funciones permitidas por el reglamento de 42.
- Aunque se ha verificado en todas las funciones, se recomienda verificar la correcta liberación de memoria para evitar *memory leaks* si se usa como parte de otros códigos.

## Autores
Este código fue desarrollado por 'jocuni-p' como parte del proyecto de la escuela **42 Barcelona**.

---


