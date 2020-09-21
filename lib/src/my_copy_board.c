/*
** EPITECH PROJECT, 2018
** my_copy_env.c
** File description:
** function that copies an entire board
*/

#include "my.h"

void clean_board_memory(char **cpy)
{
    for (size_t i = 0; cpy[i]; ++i)
        free(cpy[i]);
    free(cpy);
}

size_t get_board_len(const char **src)
{
    size_t i = 0;

    for (; src[i]; ++i);
    return (i);
}

char **my_copy_board(const char **src)
{
    char **cpy = malloc(sizeof(char *) * (get_board_len(src) + 1));

    if (!cpy)
        return (NULL);
    for (size_t i = 0; src[i]; ++i)
        if (!(cpy[i] = my_strdup(src[i])))
            return (NULL);
    cpy[get_board_len(src)] = 0;
    return (cpy);
}
