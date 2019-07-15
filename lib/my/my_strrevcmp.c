/*
** EPITECH PROJECT, 2018
** my_strrevcmp.c
** File description:
** my_strcmp but beginning from the end to first char
*/

#include "my.h"

int my_strrevcmp(const char *s1, const char *s2)
{
    size_t count = my_strlen(s1);
    size_t count2 = my_strlen(s2);

    if (!s1 || !s2)
        return (-1);
    for (size_t i = 0; s1[count] == s2[count2] && count
    && count2; ++i, --count, --count2);
    return (s1[count] - s2[count2]);
}
