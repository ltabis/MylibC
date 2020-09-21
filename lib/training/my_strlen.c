/*
** EPITECH PROJECT, 2017
** my_strlen.c
** File description:
** determinate the lenght of a string
*/

#include <stdlib.h>

size_t my_strlen(char const *str)
{
    size_t i = 0;

    if (!str)
        return (0);
    for (; str[i]; ++i);
    return (i);
}
