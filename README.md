*This project has been created as part of the 42 curriculum by mabuuals.*

## Description

**Libft** is the first project of the 42 common core. The goal is to write, from scratch, a personal C library that re-implements a set of standard C library functions, adds several useful utility functions, and (in the bonus part) provides a small linked-list API. The resulting static library, `libft.a`, is meant to be reused in all later 42 projects.

The project teaches the fundamentals of C programming:

- Manual memory management (`malloc`, `free`) and avoiding leaks.
- Pointers, pointer arithmetic, and working with raw memory.
- Strings as null-terminated `char` arrays and the edge cases around them.
- Structures and dynamic data structures (linked lists).
- Function pointers (used by `ft_lstiter`, `ft_lstmap`, `ft_lstdelone`, `ft_lstclear`, `ft_striteri`, `ft_strmapi`).
- Building a library with a `Makefile` and archiving object files with `ar`.
- Understanding undefined behavior and crashes such as segmentation faults and bus errors.

### Library overview

The library is organized into three parts. All functions are prefixed with `ft_` and declared in `libft.h`.

#### Part 1 — Libc functions

Re-implementations of standard functions, behaving the same as their originals (as described in their `man` pages).

| Category | Functions |
|---|---|
| Character checks | `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint` |
| Character conversion | `ft_toupper`, `ft_tolower` |
| String handling | `ft_strlen`, `ft_strlcpy`, `ft_strlcat`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_strnstr`, `ft_strdup` |
| Memory handling | `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp`, `ft_calloc` |
| Conversion | `ft_atoi` |

#### Part 2 — Additional functions

Functions that are not in the standard libc, or that are available there in a different form.

| Function | Description |
|---|---|
| `ft_substr` | Allocates and returns a substring of a string. |
| `ft_strjoin` | Allocates and returns the concatenation of two strings. |
| `ft_strtrim` | Allocates and returns a copy of a string with the given set of characters trimmed from both ends. |
| `ft_split` | Splits a string using a delimiter character and returns a `NULL`-terminated array of strings. |
| `ft_itoa` | Converts an integer to an allocated string. |
| `ft_strmapi` | Applies a function to each character (with its index) and returns a new string of the results. |
| `ft_striteri` | Applies a function to each character (with its index) of a string, in place. |
| `ft_putchar_fd` | Writes a character to a file descriptor. |
| `ft_putstr_fd` | Writes a string to a file descriptor. |
| `ft_putendl_fd` | Writes a string followed by a newline to a file descriptor. |
| `ft_putnbr_fd` | Writes an integer to a file descriptor. |

#### Part 3 — : linked lists

A singly linked list built on the following structure:

```c
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;
```

| Function | Description |
|---|---|
| `ft_lstnew` | Creates a new node holding the given content. |
| `ft_lstadd_front` | Adds a node at the beginning of the list. |
| `ft_lstsize` | Counts the nodes in the list. |
| `ft_lstlast` | Returns the last node of the list. |
| `ft_lstadd_back` | Adds a node at the end of the list. |
| `ft_lstdelone` | Frees a single node's content (using a given function) and the node itself. |
| `ft_lstclear` | Deletes and frees a node and all the nodes after it. |
| `ft_lstiter` | Applies a function to the content of every node. |
| `ft_lstmap` | Creates a new list by applying a function to each node's content, cleaning up on allocation failure. |

## Instructions

### Requirements

- A C compiler (`cc`, `gcc`, or `clang`)
- `make`
- `ar` (to create the static library)

### Compilation

Clone the repository and run `make` from its root:

```bash
make          # builds libft.a (Parts 1 and 2)
make clean    # removes object files
make fclean   # removes object files and libft.a
make re       # fclean followed by make
```

Files are compiled with the flags `-Wall -Wextra -Werror`.

### Usage

Include the header in your source file:

```c
#include "libft.h"
```

Then compile your program and link it against the library:

```bash
cc -Wall -Wextra -Werror main.c -L. -lft -o my_program
```

(`-L.` tells the compiler to look for libraries in the current directory, and `-lft` links `libft.a`.) If `libft.h` is in another directory, add `-I<path_to_header>`.

## Resources

### References

- [Linked List Data Structure — GeeksforGeeks](https://www.geeksforgeeks.org/dsa/linked-list-data-structure/)
- [C Structures — W3Schools](https://www.w3schools.com/c/c_structs.php)
- [Function Pointer in C — GeeksforGeeks](https://www.geeksforgeeks.org/c/function-pointer-in-c/)
- [Segmentation Fault (SIGSEGV) vs Bus Error (SIGBUS) — GeeksforGeeks](https://www.geeksforgeeks.org/c/segmentation-fault-sigsegv-vs-bus-error-sigbus/)
- The Linux `man` pages (`man 3 <function>`) for every re-implemented libc function.

### Use of AI

AI was used for:

- **README.md:** generating the structure and wording of this file. The content was reviewed and checked against the actual project.
