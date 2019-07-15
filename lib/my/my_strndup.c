/*
** EPITECH PROJECT, 2017
** my_strndup.c
** File description:
** duplicate a string
*/

#include <stdlib.h>
#include "my.h"

char *my_strndup(const char *src, size_t n)
{
    char *str = NULL;
    size_t i = 0;

    if (!src || !(str = malloc(sizeof(char) * (n + 1))))
        return (NULL);
    for (; src[i] != 0 && i < n; str[i] = src[i], ++i);
    str[i] = 0;
    return (str);
}
