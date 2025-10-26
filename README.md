```markdown
<h1 align="center">
  <img alt="Libft" width="200px" height="200px" src="" />
</h1>

> 42sp School project

This repository contains all files for the **libft** project in the **42sp common core cursus**. It's a custom-made library of useful functions in **C language**. The repository includes the `Makefile` and the `libft.h` header.

<h2 align="center">
	<a href="#about">About</a>
	<span> · </span>
	<a href="#grade">Grade</a>
	<span> · </span>
	<a href="#index">Index</a>
	<span> · </span>
	<a href="#requirements">Requirements</a>
	<span> · </span>
	<a href="#instructions">Instructions</a>
	<span> · </span>
	<a href="#testing">Testing</a>
</h2>

## About

This project is a **C library** of useful functions that are allowed to be used in future **42 School cursus** projects. With access to this library, the coding process in incoming projects will be more effective. The aim of rewriting these functions is to get a better understanding of them, and get a wide range of utilities for the next projects.

The code in this repository follows the rules of the **42 Norminette**.

## Grade
<img alt="Project Grade" width="150px" src="" />

## Index

### Functions from `<ctype.h>` library
* [`ft_isascii`](ft_isascii.c) - Test for ASCII character
* [`ft_isalpha`](ft_isalpha.c) - Test for alphabetic character
* [`ft_isdigit`](ft_isdigit.c) - Test for decimal digit
* [`ft_isalnum`](ft_isalnum.c) - Test for alphanumeric character
* [`ft_isprint`](ft_isprint.c) - Test for printable character
* [`ft_tolower`](ft_tolower.c) - Convert to lowercase
* [`ft_toupper`](ft_toupper.c) - Convert to uppercase

### Functions from `<stdlib.h>` library
* [`ft_atoi`](ft_atoi.c) - Convert ASCII string to integer
* [`ft_calloc`](ft_calloc.c) - Allocate and zero-initialize array

### Functions from `<strings.h>` library
* [`ft_bzero`](ft_bzero.c) - Zero a byte string
* [`ft_memset`](ft_memset.c) - Fill memory with constant byte
* [`ft_memchr`](ft_memchr.c) - Scan memory for character
* [`ft_memcmp`](ft_memcmp.c) - Compare memory areas
* [`ft_memmove`](ft_memmove.c) - Copy memory area (handling overlap)
* [`ft_memcpy`](ft_memcpy.c) - Copy memory area

### Functions from `<string.h>` library
* [`ft_strlen`](ft_strlen.c) - Find length of string
* [`ft_strchr`](ft_strchr.c) - Locate character in string
* [`ft_strrchr`](ft_strrchr.c) - Locate last occurrence of character
* [`ft_strnstr`](ft_strnstr.c) - Locate substring in string
* [`ft_strncmp`](ft_strncmp.c) - Compare two strings (size-limited)
* [`ft_strdup`](ft_strdup.c) - Duplicate string
* [`ft_strlcpy`](ft_strlcpy.c) - Size-bounded string copy
* [`ft_strlcat`](ft_strlcat.c) - Size-bounded string concatenation

### Non-standard functions
* [`ft_itoa`](ft_itoa.c) - Convert integer to string
* [`ft_substr`](ft_substr.c) - Extract substring from string
* [`ft_strtrim`](ft_strtrim.c) - Trim characters from start/end
* [`ft_strjoin`](ft_strjoin.c) - Concatenate two strings
* [`ft_split`](ft_split.c) - Split string into array
* [`ft_strmapi`](ft_strmapi.c) - Apply function to each character
* [`ft_striteri`](ft_striteri.c) - Apply function to each character (with index)
* [`ft_putchar_fd`](ft_putchar_fd.c) - Output character to file descriptor
* [`ft_putstr_fd`](ft_putstr_fd.c) - Output string to file descriptor
* [`ft_putendl_fd`](ft_putendl_fd.c) - Output string + newline to file descriptor
* [`ft_putnbr_fd`](ft_putnbr_fd.c) - Output number to file descriptor

### Linked list functions *(bonus)*
* [`ft_lstnew`](ft_lstnew_bonus.c) - Create new list element
* [`ft_lstsize`](ft_lstsize_bonus.c) - Count list elements
* [`ft_lstlast`](ft_lstlast_bonus.c) - Find last element
* [`ft_lstadd_back`](ft_lstadd_back_bonus.c) - Add element to end
* [`ft_lstadd_front`](ft_lstadd_front_bonus.c) - Add element to beginning
* [`ft_lstdelone`](ft_lstdelone_bonus.c) - Delete element
* [`ft_lstclear`](ft_lstclear_bonus.c) - Clear list
* [`ft_lstiter`](ft_lstiter_bonus.c) - Iterate through list
* [`ft_lstmap`](ft_lstmap_bonus.c) - Apply function to list

## Requirements
The library is written in **C language** and needs the `gcc` or `clang` compiler, with `<stdlib.h>` and `<unistd.h>` standard libraries to run.

## Instructions

### 1. Compiling the library

For **basic** functions:
```bash
make
```

For **bonus** functions:
```bash
make bonus
```

### 2. Cleaning files

To clean object files:
```bash
make clean
```

To clean all generated files:
```bash
make fclean
```

### 3. Recompile
```bash
make re
```

### 4. Using in your code
```c
#include "libft.h"
```

## Testing
This library has been tested with [Francinette](https://github.com/xicodomingues/francinette).
```

**Para completar:**

1. **Coloque o caminho correto para suas imagens** no lugar de `caminho/para/sua/`
2. **Todos os links para os arquivos .c** já estão no formato correto (apontando para os arquivos no mesmo repositório)
3. **Mantenha a estrutura de pastas** igual à do seu repositório

**Dica extra:** Se quiser adicionar uma badge de status do projeto, você pode usar:

```markdown
![Libft](https://github.com/seu-usuario/libft/workflows/Libft/badge.svg)
```