/*
** EPITECH PROJECT, 2017
** my_strcmp.c
** File description:
** compare two strings for n characters
*/

#include <stdlib.h>

int my_strncmp(char const *s1, char const *s2, size_t n)
{
    size_t count = 0;

    for (; s2[count] == s1[count] && s1[count] != 0 &&
    s2[count] != 0 && count < n; ++count);
    return (s1[count] - s2[count]);
}
