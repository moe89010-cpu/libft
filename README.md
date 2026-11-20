*This project has been created as part of the 42 curriculum by <mohaalho>.*

# Libft

## Description

Libft involves creating a personal C library by reimplementing standard C library functions and developing additional utility functions.

The goal is to understand C programming fundamentals, including pointers, memory management, string manipulation, and linked lists. The library can be reused in future C projects.

## Library Contents

The library contains the following categories of functions.

### 1. Character Checking and Conversion

These functions check character types or convert between uppercase and lowercase.

`ft_isalpha` : Checks whether a character is an alphabetic letter.
`ft_isdigit` : Checks whether a character is a digit.
`ft_isalnum` : Checks whether a character is alphanumeric.
`ft_isascii` : Checks whether a character belongs to the ASCII character set.
`ft_isprint` : Checks whether a character is printable.
`ft_toupper` : Converts a lowercase letter to uppercase.
`ft_tolower` : Converts an uppercase letter to lowercase.

### 2. String Functions

These functions calculate string lengths, search for characters or substrings, compare strings, and manipulate string contents.

`ft_strlen` : Calculates the length of a string.
`ft_strlcpy` : Copies a string into a destination buffer with a size limit.
`ft_strlcat` : Appends a string to a destination buffer with a size limit.
`ft_strchr` : Finds the first occurrence of a character in a string.
`ft_strrchr` : Finds the last occurrence of a character in a string.
`ft_strncmp` : Compares two strings up to a specified number of characters.
`ft_strnstr` : Searches for a substring within a string up to a specified length.
`ft_strdup` : Allocates memory and creates a duplicate of a string.
`ft_substr` : Extracts a substring from a string.
`ft_strjoin` : Concatenates two strings into a newly allocated string.
`ft_strtrim` : Removes specified characters from the beginning and end of a string.
`ft_split` : Splits a string into an array of strings using a delimiter.
`ft_strmapi` : Creates a new string by applying a function to each character.
`ft_striteri` : Applies a function to each character of a string in place.

### 3. Memory Functions

These functions operate on memory blocks and manage dynamic memory allocation.


`ft_memset` : Fills a memory block with a specified byte.
`ft_bzero` : Sets a memory block to zero.
`ft_memcpy` : Copies bytes between memory regions that do not overlap.
`ft_memmove` : Copies bytes safely when memory regions may overlap.
`ft_memchr` : Searches for a byte in a memory block.
`ft_memcmp` : Compares two memory blocks.
`ft_calloc` : Allocates memory for multiple elements and initializes it to zero.

### 4. Numeric Conversion

`ft_atoi` : Converts the initial numeric portion of a string into an integer.
`ft_itoa` : Converts an integer into a newly allocated string representation.

### 5. File Descriptor Output Functions

These functions write characters, strings, and numbers to a specified file descriptor.

`ft_putchar_fd` : Writes a character to a file descriptor.
`ft_putstr_fd` : Writes a string to a file descriptor.
`ft_putendl_fd` : Writes a string followed by a newline.
`ft_putnbr_fd` : Writes an integer to a file descriptor.

### 6. Linked List Functions

This section implements linked list using the t_list structure defined in libft.h.
Each node contains a content pointer and a next pointer to the following node.

`ft_lstnew` : Creates a new linked-list node.
`ft_lstadd_front` : Adds a node to the beginning of a list.
`ft_lstsize` : Counts the number of nodes in a list.
`ft_lstlast` : Returns the last node in a list.
`ft_lstadd_bck` : Adds a node to the end of a list.
`ft_lstdelone` : Deletes one node using a supplied deletion function.
`ft_lstclear` : Deletes and frees all nodes in a list.
`ft_lstiter` : Applies a function to the content of each node.
`ft_lstmap` : Creates a new list by applying a function to each node's content.

## Instructions

Makefile
The Makefile automates compilation and library creation.
`make` : Compiles mandatory functions and creates libft.a.
`make bonus` : Compiles the bonus linked-list functions and adds them to the library.
`make clean` : Removes object files (.o).
`make fclean` : Removes object files and libft.a.
`make re` : Performs a full clean and rebuild.

The library is created using `ar rcs`, which creates or updates the static archive and its symbol index.

Include the library header in your C program:
#include "libft.h"

Run Norminette to check coding standards:
norminette *.c libft.h


## Resources

- [42 School](https://42.fr/)
- [Linux man-pages](https://man7.org/linux/man-pages/)

**AI usage:** ChatGPT was used to clarify C concepts, discuss edge cases, troubleshoot code, and understand Makefile commands.

## Author

42 login : mohaalho
42 Abu Dhabi -Libft
