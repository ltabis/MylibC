/*
** EPITECH PROJECT, 2018
** my_concat
** File description:
** concatenate two strings into one
*/

#include "my.h"

char *my_concat(char const *s1, char const *s2)
{
    size_t len_s1 = my_strlen(s1);
    size_t len_s2 = my_strlen(s2);
    size_t index = 0;
    char *str = malloc(sizeof(char) * (len_s1 + len_s2 + 1));

    if (!str || !s1 || !s2)
        return (NULL);
    str[len_s1 + len_s2] = 0;
    for (size_t i = 0; s1[i]; i++, index++)
        str[index] = s1[i];
    for (size_t i = 0; s2[i]; i++, index++)
        str[index] = s2[i];
    str[index] = 0;
    return (str);
}
