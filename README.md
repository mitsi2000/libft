*This project has been created as part of the 42 curriculum by mitrakot.*

## Description

Libft is the first project in the 42 curriculum that involves creating a custom C library. The goal is to reimplement a collection of standard C library functions (libc) along with additional utility functions that will serve as a foundation for future projects throughout the curriculum.

This library includes:
- Standard libc functions for string manipulation, memory management, and character operations
- Additional utility functions for string processing and conversions
- Linked list manipulation functions

## Instructions

### Installation 

To get the project, clone the repository:

```bash
git clone git@vogsphere.42antananarivo.mg:vogsphere/intra-uuid-cad70df6-646d-4af8-9f13-63f2c55e67b6-7186657-mitrakot libft
```

### Compilation

To compile the library, run:

```bash
make
```

This will generate the `libft.a` static library file.

### Available Makefile Rules

- Compiles the library

```bash
make
```

- To remove the object files in the directory (*.o) without deleting the final library , use the following command

```bash
make clean
```

- To removes object files and the library (libft.a), use the following command

```bash
make fclean
```

- To rebuild the library , use the following command

```bash
make re
```

### Using the Library

To use this library in your projects:

1. Include the header in your C files:
```c
#include "libft.h"
```

2. Compile your project with the library:
```bash
cc -Wall -Wextra -Werror your_file.c -L. -lft
```
- -L. : cherche les bibliothèques dans le répertoire courant

- -lft : lie avec la bibliothèque libft.a

## Resources

### Documentation & Tutorials
- [C Standard Library Documentation](https://en.cppreference.com/w/c)
- [Linux Man Pages](https://man7.org/linux/man-pages/)
- [Understanding Memory Management in C](https://www.geeksforgeeks.org/dynamic-memory-allocation-in-c-using-malloc-calloc-free-and-realloc/)
- [Linked Lists in C](https://www.learn-c.org/en/Linked_lists)
- [Claude AI for helping to make README and create some test cases](https://claude.ai/new)

### AI Usage
I used AI tools to help me with:
- Understanding memory management and string manipulation concepts
- Finding edge cases and debugging my code
- Reading and understanding man pages
- Checking my code follows the 42 Norm

## Details

### Library Functions

#### Part 1 - Libc Functions

These functions replicate standard C library functions with an `ft_` prefix:

**Character Classification & Conversion:**
- `ft_isalpha` - Check if character is alphabetic
- `ft_isdigit` - Check if character is a digit
- `ft_isalnum` - Check if character is alphanumeric
- `ft_isascii` - Check if character is ASCII
- `ft_isprint` - Check if character is printable
- `ft_toupper` - Convert character to uppercase
- `ft_tolower` - Convert character to lowercase

**String Functions:**
- `ft_strlen` - Calculate string length
- `ft_strlcpy` - Copy string with size limit
- `ft_strlcat` - Concatenate string with size limit
- `ft_strchr` - Locate character in string
- `ft_strrchr` - Locate character in string (from end)
- `ft_strncmp` - Compare strings up to n characters
- `ft_strnstr` - Locate substring in string
- `ft_strdup` - Duplicate string

**Memory Functions:**
- `ft_memset` - Fill memory with constant byte
- `ft_bzero` - Zero a byte string
- `ft_memcpy` - Copy memory area
- `ft_memmove` - Copy memory area (handles overlap)
- `ft_memchr` - Scan memory for character
- `ft_memcmp` - Compare memory areas
- `ft_calloc` - Allocate and zero memory

**Conversion:**
- `ft_atoi` - Convert string to integer

#### Part 2 - Additional Functions

Custom utility functions not in the standard library:

- `ft_substr` - Extract substring from string
- `ft_strjoin` - Concatenate two strings into new string
- `ft_strtrim` - Trim characters from beginning and end
- `ft_split` - Split string into array by delimiter
- `ft_itoa` - Convert integer to string
- `ft_strmapi` - Apply function to each character (with index)
- `ft_striteri` - Apply function to each character (in-place)
- `ft_putchar_fd` - Output character to file descriptor
- `ft_putstr_fd` - Output string to file descriptor
- `ft_putendl_fd` - Output string + newline to file descriptor
- `ft_putnbr_fd` - Output integer to file descriptor

#### Part 3 - Bonus (Linked Lists)

Functions for manipulating linked lists using the `t_list` structure:

```c
typedef struct s_list
{
    void            *content;
    struct s_list   *next;
}   t_list;
```

- `ft_lstnew` - Create new list node
- `ft_lstadd_front` - Add node at beginning of list
- `ft_lstadd_back` - Add node at end of list
- `ft_lstsize` - Count nodes in list
- `ft_lstlast` - Get last node of list
- `ft_lstdelone` - Delete single node
- `ft_lstclear` - Delete and free entire list
- `ft_lstiter` - Apply function to each node's content
- `ft_lstmap` - Create new list by applying function to each node

### Technical Details

- Follows 42 Norm coding standard
- Compiled with `-Wall -Wextra -Werror`
- No global variables
- Proper memory management

## Example of usage of the library

### Here is an example of the main usage of one of the functions from the library .

Tested function : ft_isalpha

```c
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mitrakot <mitrakot@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 15:19:40 by mitrakot          #+#    #+#             */
/*   Updated: 2026/02/12 15:23:44 by mitrakot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	char	*str;
	int		result;

	str = "Hello World";
	result = ft_isalpha(str[0]);
	printf("ft_isalpha('%c') = %d\n", str[0], result);
	return (0);
}
```

### Example of compilation using libft

To use the static library in a program , include it during compilation. Example:

```bash
cc -Wall -Wextra -Werror main.c -L. -lft
```
## AUTHOR

*This project was created by 42 student (mitrakot).*
