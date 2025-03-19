# Libft

## Description
`libft` is a library of C functions developed as part of the **42 Barcelona** school program. It provides implementations of standard C library functions, as well as additional utilities to facilitate program development.

## Features
- Implementations of functions from the standard libraries `string.h`, `stdlib.h`, `ctype.h`, etc.
- Functions for memory and string manipulation.
- Functions for linked list management.
- Strict use of `malloc()` and `free()` to avoid memory leaks.
- **Also includes the functions ft_printf() and get_next_line().**

## Usage

### **1. Compilation**
To compile the library and generate `libft.a`, run:

```sh
make
```

To clean object files and the library:

```sh
make clean
make fclean
```

### **2. Including in a project**
You can include `libft` in your project as follows:

```c
#include "libft.h"
```

To compile a program that uses `libft`, run:

```sh
gcc -Wall -Wextra -Werror main.c -L. -lft -o my_program
```

## Files

- `libft.h` → Header file with function definitions.
- `ft_*.c` → Function implementations.
- `Makefile` → Script to compile the library.

## Main Functionalities
- **Memory manipulation**: `ft_memset`, `ft_memcpy`, `ft_memmove`, `ft_bzero`, `ft_calloc`.
- **String manipulation**: `ft_strlen`, `ft_strcpy`, `ft_strcat`, `ft_strdup`, `ft_substr`, `ft_split`.
- **Data conversion**: `ft_atoi`, `ft_itoa`.
- **Linked list management**: `ft_lstnew`, `ft_lstadd_front`, `ft_lstsize`, `ft_lstclear`.

## Notes
- The library only uses functions allowed by the 42 regulations.
- Although all functions have been tested, it is recommended to verify proper memory release to avoid *memory leaks* when used as part of other code.

## Authors
This code was developed by 'jocuni-p' as part of the **42 Barcelona** school project.

---


