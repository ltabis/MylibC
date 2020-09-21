/*
** EPITECH PROJECT, 2018
** my_clean_str.c
** File description:
** function that will clean an input
*/

#include "my.h"

void backup_word(char *str, size_t index)
{
    size_t i = index + 1;

    for (; str[i]; i++)
        str[i - 1] = str[i];
    str[i - 1] = str[i];
}

void my_clean_str(char *str)
{
    if (!str)
        return;
    for (size_t i = 0; str[i]; i++)
        str[i] = str[i] >= 7 && str[i] <= 13 ? ' ' : str[i];
    for (size_t i = 0; str[i]; i++)
        if (str[i] == ' ' && str[i + 1] && str[i + 1] == ' ') {
            backup_word(str, i);
            i = 0;
        }
    if (str[my_strlen(str) - 1] == ' ')
        str[my_strlen(str) - 1] = 0;
}
