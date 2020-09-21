/*
** EPITECH PROJECT, 2017
** my_strcmp.c
** File description:
** compare two strings
*/

#include <stdlib.h>

int my_strcmp(char const *s1, char const *s2)
{
    size_t count = 0;

    for (; s2[count] == s1[count] && s1[count] && s2[count]; ++count);
    return (s1[count] - s2[count]);
}
