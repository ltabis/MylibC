/*
** EPITECH PROJECT, 2019
** count_words.c
** File description:
** couting words in a string
*/

#include "my.h"
#include "proto.h"

size_t count_words(const char *str)
{
    size_t words = 0;
    char *cpy = strdup(str);

    my_clean_str(cpy);
    if (!cpy)
        return (0);
    for (size_t i = 0; cpy[i]; ++i)
        words += my_isempty(cpy[i]) == TRUE && cpy[i + 1] ? 1 : 0;
    free(cpy);
    return (++words);
}
