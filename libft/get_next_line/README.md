# get_next_line

## Description
`get_next_line()` is a C function that allows reading a complete line from a file descriptor (`fd`) efficiently. This function is particularly useful when reading files line by line without loading the entire file into memory.

## Features
- Reads a complete line from a file or from standard input (`stdin`).
- Uses a **dynamic buffer** to efficiently manage reading operations.
- Supports **multiple file descriptors**.
- Implemented with dynamic memory management to prevent unnecessary memory usage.

## Usage

### **1. Compilation**
The `get_next_line.c` file is compiled within the libft.
You can adjust the value of `BUFFER_SIZE` as needed in `#define BUFFER_SIZE 8` within `libft.h`.

### **2. Usage Example**

```c
#include <fcntl.h>
#include <stdio.h>
#include "get_next_line.h"

int main()
{
    int fd = open("file.txt", O_RDONLY);
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

## Files

- `get_next_line.c` → Implementation of the main function.
- `get_next_line_utils.c` → Auxiliary functions for string handling.
- `get_next_line.h` → Header file containing function definitions.
- A main.c / main_bonus.c file is included to allow the project to be compiled run and tested.

## Internal Functioning

1. **Reading with `read()`**: Reads blocks of `BUFFER_SIZE` bytes from the file.
2. **Use of a "stash"**: Stores unprocessed content in a `static` variable.
3. **Searching for `\n`**: Looks for a newline character in the read buffer.
4. **Returns the complete line** and stores the remaining content.
5. **Memory cleanup** to prevent memory leaks.

## Bonus Version
The version implemented in this libft is the "bonus" version of `get_next_line`, which allows handling multiple file descriptors simultaneously. This means that different lines can be read from different files at the same time without losing information from each one.

## Notes
- The function must return `NULL` when reaching the end of the file (EOF).
- If `read()` returns an error, the function should also return `NULL`.
- The memory returned by `get_next_line()` must be freed after use.

## Authors
This code was developed by jocuni-p as part of the **42 Barcelona** school project.

---
