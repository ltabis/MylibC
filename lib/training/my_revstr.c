/*
** EPITECH PROJECT, 2017
** my_revstr.c
** File description:
** reversing strings character
*/

#include "my.h"
#include <stdio.h>

char *my_revstr(char *str)
{
    size_t i = str ? my_strlen(str) : 0;
    char save = 0;

    if (!str)
        return (NULL);
    for (size_t count = 0; count != i / 2; ++count) {
        save = str[count];
        str[count] = str[i - count - 1];
        str[i - count - 1] = save;
    }
    return (str);
}
