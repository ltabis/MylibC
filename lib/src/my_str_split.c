/*
** EPITECH PROJECT, 2019
** my_str_split.c
** File description:
** splitting strings
*/

#include "my.h"
#include "proto.h"
#include <stdlib.h>

char **my_str_split(const char *str)
{
    char **array = NULL;
    size_t words = count_words(str);
    char *cpy = strdup(str);
    char *nxt_wrd = NULL;

    if (!cpy || !(array = malloc(sizeof(char *) * (words + 1))))
        return (NULL);
    my_clean_str(cpy);
    nxt_wrd = &cpy[0];
    for (size_t i = 0, w = 0; w != words;) {
        for (i = 0; my_isempty(nxt_wrd[i]) == FALSE; ++i);
        array[w++] = strndup(nxt_wrd, i);
        nxt_wrd += i + 1;
    }
    array[words] = NULL;
    return (array);
}
