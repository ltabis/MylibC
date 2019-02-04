/*
** EPITECH PROJECT, 2018
** my_concatc
** File description:
** concatenate two strings into one with libC function
*/

#include "my.h"

char *my_concatc(char const *s1, char const *s2)
{
    char *str = NULL;

    if (!s1 || !s2 ||
    !(str = malloc(sizeof(char) * (strlen(s1) + strlen(s2) + 1))))
        return (NULL);
    strcpy(str, s1);
    strcat(str, s2);
    return (str);
}
