<h1 align="center">
  <img alt="Libft" width="200px" height="200px" src="https://github.com/handyman0/42-libft/blob/main/libfte.png" />
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
* [`ft_isascii`](https://github.com/handyman0/42-libft/blob/main/ft_isascii.c) - Test for ASCII character
* [`ft_isalpha`](https://github.com/handyman0/42-libft/blob/main/ft_isalpha.c) - Test for alphabetic character
* [`ft_isdigit`](https://github.com/handyman0/42-libft/blob/main/ft_isdigit.c) - Test for decimal digit
* [`ft_isalnum`](https://github.com/handyman0/42-libft/blob/main/ft_isalnum.c) - Test for alphanumeric character
* [`ft_isprint`](https://github.com/handyman0/42-libft/blob/main/ft_isprint.c) - Test for printable character
* [`ft_tolower`](https://github.com/handyman0/42-libft/blob/main/ft_tolower.c) - Convert to lowercase
* [`ft_toupper`](https://github.com/handyman0/42-libft/blob/main/ft_toupper.c) - Convert to uppercase

### Functions from `<stdlib.h>` library
* [`ft_atoi`](https://github.com/handyman0/42-libft/blob/main/ft_atoi.c) - Convert ASCII string to integer
* [`ft_calloc`](https://github.com/handyman0/42-libft/blob/main/ft_calloc.c) - Allocate and zero-initialize array

### Functions from `<strings.h>` library
* [`ft_bzero`](https://github.com/handyman0/42-libft/blob/main/ft_bzero.c) - Zero a byte string
* [`ft_memset`](https://github.com/handyman0/42-libft/blob/main/ft_memset.c) - Fill memory with constant byte
* [`ft_memchr`](https://github.com/handyman0/42-libft/blob/main/ft_memchr.c) - Scan memory for character
* [`ft_memcmp`](https://github.com/handyman0/42-libft/blob/main/ft_memcmp.c) - Compare memory areas
* [`ft_memmove`](https://github.com/handyman0/42-libft/blob/main/ft_memmove.c) - Copy memory area (handling overlap)
* [`ft_memcpy`](https://github.com/handyman0/42-libft/blob/main/ft_memcpy.c) - Copy memory area

### Functions from `<string.h>` library
* [`ft_strlen`](https://github.com/handyman0/42-libft/blob/main/ft_strlen.c) - Find length of string
* [`ft_strchr`](https://github.com/handyman0/42-libft/blob/main/ft_strchr.c) - Locate character in string
* [`ft_strrchr`](https://github.com/handyman0/42-libft/blob/main/ft_strrchr.c) - Locate last occurrence of character
* [`ft_strnstr`](https://github.com/handyman0/42-libft/blob/main/ft_strnstr.c) - Locate substring in string
* [`ft_strncmp`](https://github.com/handyman0/42-libft/blob/main/ft_strncmp.c) - Compare two strings (size-limited)
* [`ft_strdup`](https://github.com/handyman0/42-libft/blob/main/ft_strdup.c) - Duplicate string
* [`ft_strlcpy`](https://github.com/handyman0/42-libft/blob/main/ft_strlcpy.c) - Size-bounded string copy
* [`ft_strlcat`](https://github.com/handyman0/42-libft/blob/main/ft_strlcat.c) - Size-bounded string concatenation

### Non-standard functions
* [`ft_itoa`](https://github.com/handyman0/42-libft/blob/main/ft_itoa.c) - Convert integer to string
* [`ft_substr`](https://github.com/handyman0/42-libft/blob/main/ft_substr.c) - Extract substring from string
* [`ft_strtrim`](https://github.com/handyman0/42-libft/blob/main/ft_strtrim.c) - Trim characters from start/end
* [`ft_strjoin`](https://github.com/handyman0/42-libft/blob/main/ft_strjoin.c) - Concatenate two strings
* [`ft_split`](https://github.com/handyman0/42-libft/blob/main/ft_split.c) - Split string into array
* [`ft_strmapi`](https://github.com/handyman0/42-libft/blob/main/ft_strmapi.c) - Apply function to each character
* [`ft_striteri`](https://github.com/handyman0/42-libft/blob/main/ft_striteri.c) - Apply function to each character (with index)
* [`ft_putchar_fd`](https://github.com/handyman0/42-libft/blob/main/ft_putchar_fd.c) - Output character to file descriptor
* [`ft_putstr_fd`](https://github.com/handyman0/42-libft/blob/main/ft_putstr_fd.c) - Output string to file descriptor
* [`ft_putendl_fd`](https://github.com/handyman0/42-libft/blob/main/ft_putendl_fd.c) - Output string + newline to file descriptor
* [`ft_putnbr_fd`](https://github.com/handyman0/42-libft/blob/main/ft_putnbr_fd.c) - Output number to file descriptor

### Linked list functions *(bonus)*
* [`ft_lstnew`](https://github.com/handyman0/42-libft/blob/main/ft_lstnew_bonus.c) - Create new list element
* [`ft_lstsize`](https://github.com/handyman0/42-libft/blob/main/ft_lstsize_bonus.c) - Count list elements
* [`ft_lstlast`](https://github.com/handyman0/42-libft/blob/main/ft_lstlast_bonus.c) - Find last element
* [`ft_lstadd_back`](https://github.com/handyman0/42-libft/blob/main/ft_lstadd_back_bonus.c) - Add element to end
* [`ft_lstadd_front`](https://github.com/handyman0/42-libft/blob/main/ft_lstadd_front_bonus.c) - Add element to beginning
* [`ft_lstdelone`](https://github.com/handyman0/42-libft/blob/main/ft_lstdelone_bonus.c) - Delete element
* [`ft_lstclear`](https://github.com/handyman0/42-libft/blob/main/ft_lstclear_bonus.c) - Clear list
* [`ft_lstiter`](https://github.com/handyman0/42-libft/blob/main/ft_lstiter_bonus.c) - Iterate through list
* [`ft_lstmap`](https://github.com/handyman0/42-libft/blob/main/ft_lstmap_bonus.c) - Apply function to list

## Requirements
The library is written in **C language** and needs the `gcc` or `clang` compiler, with `<stdlib.h>` and `<unistd.h>` standard libraries to run.

## Instructions

### 1. Compiling the library

For __basic__ functions:
```
$ make
```

For __bonus__ functions:
```
$ make bonus
```

### 2. Cleaning all binary (.o) and executable files (.a)

To delete all files generated with make, go to the path and run:
```
$ make fclean
```

### 3. Using it in your code

To use the library functions in your code, simply include this header:
```
#include "libft.h"
```

## Testing
This library have been tested with [Francinette](https://github.com/xicodomingues/francinette).
