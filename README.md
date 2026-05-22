*This project has been created as part of the 42 curriculum by aimdoyle.*

# ft_printf

## Description

`ft_printf` is my implementation of the C standard library function `printf`. The goal is to recreate the core formatting and output behaviour of the original function by handling variadic arguments and a defining a set of format specifiers.

The function has the following prototype:

```c
int ft_printf(const char *format, ...);
```

It handles the following conversions:

| Specifier | Output |
|---|---|
| `%c` | Single character |
| `%s` | String |
| `%p` | Pointer address in hexadecimal |
| `%d` | Signed decimal integer |
| `%i` | Signed integer in base 10 |
| `%u` | Unsigned decimal integer |
| `%x` | Hexadecimal integer (lowercase) |
| `%X` | Hexadecimal integer (uppercase) |
| `%%` | Literal percent sign |

The function returns the total number of characters printed to match the behaviour of the original `printf`.

---

## Instructions

### Compilation

```bash
make or make all
```

This compiles all source files and creates `libftprintf.a` at the root of the repository using `ar`.

### Using the library in your own project

```bash
cc your_file.c libftprintf.a -o your_program
```

Include my header in your source file:

```c
#include "ft_printf.h"
```

### Makefile rules

| Rule | |
|---|---|
| `make` or `make all` | Builds `libftprintf.a` |
| `make clean` | Removes object files |
| `make fclean` | Removes object files and `libftprintf.a` |
| `make re` | Rebuilds everything from scratch |

## About

The function walks the format string character by character. When it encounters a `%`, it looks at the next character to identify the format specifier and calls the appropriate handler. All other characters are written directly to standard output, mirroring the behaviour of the standard `printf`.

### Variadic Arguments — `va_list`

The function uses the `<stdarg.h>` macros to access arguments passed through the ellipsis (`...`):

| Macro | Purpose |
|---|---|
| `va_list` | A cursor pointing to the variadic arguments on the stack |
| `va_start` | Aims the cursor at the first variadic argument |
| `va_arg` | Reads the current argument as a given type and advances the cursor |
| `va_end` | Cleans up the cursor when done |

---

## Resources

| Resource |  |
|---|---|
| [printf(3) man page](https://man7.org/linux/man-pages/man3/printf.3.html) | The official documentation for the original `printf`, used to understand expected behaviour. I also used <stdio.h> to test the standard printf against mine.|
| [stdarg(3) man page](https://man7.org/linux/man-pages/man3/stdarg.3.html) | Documentation for `va_list`, `va_start`, `va_arg`, and `va_end` |
| [printfTester](https://github.com/Tripouille/printfTester) | A helpful tester to catch weaknesses within the code.|
| [What are variadic functions?](https://www.youtube.com/watch?v=oDC208zvsdg) | Helpful YouTube video introducing variadic functions which were a new concept at the start of this project. |

### AI Usage

Claude AI was used throughout this project for learning concepts. Specifically, a deeper dive in variadic functions and their syntax.

---

## Author

✧ª⋆ʚ Aimée ɞ˚‧｡⋆