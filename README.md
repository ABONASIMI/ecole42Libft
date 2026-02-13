
# Libft (42)

**Author:** Mohamad Abobaker Nasimi  
**School:** 42 Paris  
**Project:** libft  
**Status:** ✅ Passed (Moulinette: **125%**)  


![Moulinette Result](https://github.com/user-attachments/assets/7aad4b71-2179-4ad3-b453-f55708646505)


---

## About

**libft** is a custom C library where I re-implemented a set of standard **libc** functions and added extra utility functions (strings, memory, conversions, output), plus **bonus linked list** utilities (`t_list`).

This library is used as a base for many future 42 projects.

---

## Repository Content

### Files
- `libft.h` — header with prototypes and `t_list` definition
- `Makefile` — compilation rules to build `libft.a`
- `ft_*.c` — implementations of each function

---

## Build

### Compile mandatory part
```bash
make
```

### Compile with bonus

```bash
make bonus
```

### Clean object files

```bash
make clean
```

### Remove objects + library

```bash
make fclean
```

### Rebuild everything

```bash
make re
```

After `make`, the library file is created:

* `libft.a`

---

## How to Use

1. Include the header:

```c
#include "libft.h"
```

---

## Functions

### 1) Libc / Standard-like Functions

#### Memory

* `ft_memset` — fill memory with a byte value
* `ft_bzero` — set memory to zero
* `ft_memcpy` — copy memory (no overlap safety)
* `ft_memmove` — copy memory (overlap safe)
* `ft_memchr` — search a byte in memory
* `ft_memcmp` — compare memory blocks

#### String

* `ft_strlen` — string length
* `ft_strchr` — first occurrence of a char
* `ft_strrchr` — last occurrence of a char
* `ft_strncmp` — compare strings up to `n`
* `ft_strlcpy` — safe copy with size
* `ft_strlcat` — safe concatenation with size
* `ft_strnstr` — find substring within `len`
* `ft_strdup` — duplicate a string (malloc)

#### Character checks + conversion

* `ft_isalpha` — letter check
* `ft_isdigit` — digit check
* `ft_isalnum` — alphanumeric check
* `ft_isascii` — ASCII range check
* `ft_isprint` — printable check
* `ft_toupper` — to uppercase
* `ft_tolower` — to lowercase

#### Conversion + allocation

* `ft_atoi` — string to int
* `ft_calloc` — allocate + zero memory

---

### 2) Additional Utility Functions

* `ft_substr` — substring (malloc)
* `ft_strjoin` — concatenate two strings (malloc)
* `ft_strtrim` — trim chars from set (malloc)
* `ft_split` — split by delimiter (malloc array)
* `ft_itoa` — int to string (malloc)
* `ft_strmapi` — map function on string → new string
* `ft_striteri` — apply function on string in place

---

### 3) Output to File Descriptor

* `ft_putchar_fd` — write char to `fd`
* `ft_putstr_fd` — write string to `fd`
* `ft_putendl_fd` — write string + newline to `fd`
* `ft_putnbr_fd` — write integer to `fd`

---

## Bonus: Linked List (`t_list`)

```c
typedef struct s_list
{
    void            *content;
    struct s_list   *next;
}   t_list;
```

* `ft_lstnew` — create new node
* `ft_lstadd_front` — add node at beginning
* `ft_lstsize` — count nodes
* `ft_lstlast` — last node
* `ft_lstadd_back` — add node at end
* `ft_lstdelone` — delete one node
* `ft_lstclear` — clear entire list
* `ft_lstiter` — apply function to each content
* `ft_lstmap` — create new list by mapping function

---

## Result

✅ Moulinette: **125%**
✅ Mandatory part: passed
✅ Bonus: `9/9` linked list functions passed

---

## License

Educational project for the 42 curriculum.