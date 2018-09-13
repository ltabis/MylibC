# MylibC
Useful functions for C coding.

Remade some LibC function (printf for exemple) for training and other useful functions.

Unit testing with criterion included in the test folder.

## Functions names and descriptions

```my_chained_list.c```, ```my_chained_list_memory.c``` Creates chained lists with multiple function to pop and insert items.

```my_clean_str.c``` Delete unnecessary characters from a string.

```my_concat.c``` Concatenate two strings.

```my_nconcat.c``` Concatenate two strings by a given offset.

```my_matrix.c``` Generate matrices from a type (char, int, float, double). Cleaning and display functions included.

```my_getenv.c``` Return 0 if the variable passed as parameter is present in the environnement.

```my_getnbr.c``` transform a string into an integer.

```my_isalpha.c``` Return 0 if all characters inside a string are alpha characters.

```my_isnum.c``` Return 0 if all characters inside a string are number characters.

```my_itoa.c``` Transform an integer into a string.

```my_printf.c``` ```my_printf_flags.c``` ```my_printf_flags_bis.c``` Print stuff on output.

```my_put_nbr.c``` Print an integer to consol.

```my_putchar.c``` Print a character to consol.

```my_puterr.c``` Print a string on the error output.

```my_putstr.c``` Print a string on the standard output.

```my_revstr.c``` Revert all characters of a string.

```my_strcmp.c``` Compare two string. Return 0 if thew are indentical.

```my_strncmp.c``` Compare two string by a given offset. Return 0 if thew are indentical with the offset.

```my_strdup.c``` Duplicate a string into a new allocated memory space.

```my_strndup.c``` Duplicate a string into a new allocated memory space by a given offset.

```my_strlen.c``` Count the number of characters present in a string.

```my_strnrevcmp.c``` Compare two strings but beginning at the end to first character by a given offset. Usefull for file extension

```my_strrevcmp.c``` Compare two strings but beginning at the end to first character.

## Dependencies

> Criterion (unit testing library)

> Makefile
