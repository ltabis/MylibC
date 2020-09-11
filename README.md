# MylibC
Useful functions for C coding.

Remade some LibC function (printf for exemple) for training and other useful functions.

Unit testing with criterion included in the test folder.

## Functions names and descriptions

```my_chained_list.c```, ```my_chained_list_memory.c``` Creates chained lists with multiple functions to pop and insert items.

```my_clean_str.c``` Delete unnecessary characters from a string.

```my_concat.c``` Concatenate two strings.

```my_nconcat.c``` Concatenate two strings by a given offset.

```my_copy_board.c``` Creates and deletes a copy of a double char board.

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

## Map

there is a map data structure included in this library.
to use it, first init your head node using
```c
map_t *map = map_init();
```

you can store eather a copy of a pointer or duplicate any data inside a node.
to create a new node, use
```c
map_t *map_push(map_t *map,
                const char *key,
                void *ptr,
                size_t value_size,
                insert insertion_type)
```

your can then access an element using the 'key' with ``map_get(key)``.
the ``ptr`` argument points to the data you want store.

you can eather use DUPLICATE to store a duplicate of the data pointed by ptr,
or COPY to only copy the pointer ``ptr`` into the node. (this way you can store
elements allocated on the stack)

```c
map_t *map = map_init();

// duplicate the data pointed to by the third argument.
map = map_push(map,
	"first",
	"duplicate me please",
	20,
	DUPLICATE);

// only copy the pointer.
map = map_push(map,
	"second",
	ptr,
	sizeof(int *),
	COPY);

// will not be inserted because the key already exists.
map = map_push(map,
	"second",
	ptr,
	sizeof(int *),
	COPY);
```

you can debug the content of your map using
```c
map_debug(map);
```

you free the entire map using
```c
map_destroy(map);
```

or delete a single node using
```c
map_remove(map, "key");
```


## Dependencies

> Criterion (unit testing library)

> Makefile
